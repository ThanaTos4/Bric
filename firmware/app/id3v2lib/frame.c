/*
 * This file is part of the id3v2lib library
 *
 * Copyright (c) 2013, Lorenzo Ruiz
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */
#include "FreeRTOS.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ff.h"

#include "frame.h"
#include "utils.h"
#include "constants.h"

ID3v2_frame* parse_frame(FIL *file, int skip, int offset, int version)
{
    ID3v2_frame* frame = new_frame();
    uint32_t bytes;
    
    // Parse frame header
    f_lseek(file, skip + offset);
    f_read(file, frame->frame_id, ID3_FRAME_ID, &bytes);
    if (bytes != ID3_FRAME_ID)
    	goto error;
    // Check if we are into padding
    if(memcmp(frame->frame_id, "\0\0\0\0", 4) == 0)
    {
        vPortFree(frame);
        return NULL;
    }

    char buf[ID3_FRAME_SIZE];
    f_read(file, buf, ID3_FRAME_SIZE, &bytes);
    if (bytes != ID3_FRAME_SIZE)
    	goto error;

    frame->size = btoi(buf, ID3_FRAME_SIZE, 0);
    if(version == ID3v24)
    {
        frame->size = syncint_decode(frame->size);
    }

    f_read(file, frame->flags, ID3_FRAME_FLAGS, &bytes);
    if (bytes != ID3_FRAME_FLAGS)
    	goto error;

    // Load frame data
    frame->offset = f_tell(file);
    
    return frame;

error:
	if (frame)
		vPortFree(frame);
	return NULL;
}

int get_frame_type(char* frame_id)
{
    switch(frame_id[0])
    {
        case 'T':
            return TEXT_FRAME;
        case 'C':
            return COMMENT_FRAME;
        case 'A':
            return APIC_FRAME;
        default:
            return INVALID_FRAME;
    }
}

ID3v2_frame_text_content* parse_text_frame_content(FIL *file, ID3v2_frame* frame)
{
    ID3v2_frame_text_content* content;
    uint32_t bytes;

    if(frame == NULL)
    {
        return NULL;
    }

    f_lseek(file, frame->offset);
    content = new_text_content(frame->size);
    if (!content)
    	goto error;

    f_read(file, &(content->encoding), ID3_FRAME_ENCODING, &bytes);
    if (bytes != ID3_FRAME_ENCODING)
    	goto error;

    content->size = frame->size - ID3_FRAME_ENCODING;
    f_read(file, content->data, content->size, &bytes);
    if (bytes != content->size)
    	goto error;

    return content;

error:
	if (content) {
		free_text_content(content);
	}
	return NULL;
}

ID3v2_frame_comment_content* parse_comment_frame_content(FIL *file, ID3v2_frame* frame)
{
    ID3v2_frame_comment_content *content;
    uint32_t bytes;

    if(frame == NULL)
    {
        return NULL;
    }
    
    content = new_comment_content(frame->size);
    
    f_lseek(file, frame->offset);
    f_read(file, &(content->text->encoding), ID3_FRAME_ENCODING, &bytes);
    if (bytes != ID3_FRAME_ENCODING)
    	goto error;
    content->text->size = frame->size - ID3_FRAME_ENCODING - ID3_FRAME_LANGUAGE - ID3_FRAME_SHORT_DESCRIPTION;
    f_read(file, content->language, ID3_FRAME_LANGUAGE, &bytes);
    if (bytes != ID3_FRAME_LANGUAGE)
    	goto error;
    // Ignore short description
    f_lseek(file, frame->offset + ID3_FRAME_ENCODING + ID3_FRAME_LANGUAGE + 1);
    f_read(file, content->text->data, content->text->size, &bytes);
    if (bytes != content->text->size)
    	goto error;
    
    return content;

error:
	if (content) {
		free_comment_content(content);
	}
	return NULL;
}

ID3v2_frame_apic_content* parse_apic_frame_content(FIL *file, ID3v2_frame* frame)
{
    ID3v2_frame_apic_content *content;
    uint32_t bytes;

    if(frame == NULL)
    {
        return NULL;
    }
    
    content = new_apic_content();
    if (!content)
    	goto error;
    
    f_lseek(file, frame->offset);
    f_read(file, &(content->encoding), ID3_FRAME_ENCODING, &bytes);
    if (bytes != ID3_FRAME_ENCODING)
    	goto error;

    char buf[30];
    int i = 0;
    char ch;
    do {
        f_read(file, &ch, 1, &bytes);
        if (bytes != 1)
        	goto error;
        buf[i] = ch;
        i++;
    } while (ch != '\0' && i < 30);

    content->mime_type = pvPortMalloc(i);
    if (!(content->mime_type))
    	goto error;
    strcpy(content->mime_type, buf);

    f_read(file, &(content->picture_type), 1, &bytes);
    if (bytes != 1)
    	goto error;

    //content->description = &frame->data[++i];
    int seek = f_tell(file);
    i = 0;
    if (content->encoding == 0x01 || content->encoding == 0x02) {
            /* skip UTF-16 description */
            char buf[2];
            do {
                f_read(file, buf, 2, &bytes);
                if (bytes != 2)
                	goto error;
                i += 2;
            } while (buf[0] && buf[1]);
    }
    else {
            /* skip UTF-8 or Latin-1 description */
            char buf[1];
            do {
                f_read(file, buf, 1, &bytes);
                if (bytes != 1)
                	goto error;
                i += 1;
            } while (buf[0]);
    }
    f_lseek(file, seek);
    content->description = pvPortMalloc(i);
    f_read(file, content->description, i, &bytes);
    if (bytes != i)
    	goto error;

    seek = f_tell(file);
    content->picture_size = frame->size - (seek - frame->offset);
    content->offset = f_tell(file);

    return content;
error:
	if (content) {
		if (content->mime_type)
			vPortFree(content->mime_type);
		if (content->description)
			vPortFree(content->description);
		vPortFree(content);
	}
	return NULL;
}
