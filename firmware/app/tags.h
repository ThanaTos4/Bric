//
// Project Bric
// Copyright 2020 Wenting Zhang
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.
//
#ifndef _TAGS_H_
#define _TAGS_H_

int tags_open(char *fn);
int tags_display_cover(uint8_t *dstination, size_t stride, int width, int height);
char *tags_get_title();
char *tags_get_album();
char *tags_get_artist();
void tags_close();

#endif /* TAGS_H_ */
