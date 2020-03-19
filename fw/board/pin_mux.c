/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: LPC5528
package_id: LPC5528JBD64
mcu_data: ksdk2_0
processor_version: 7.0.1
pin_labels:
- {pin_num: '2', pin_signal: PIO0_1/FC3_CTS_SDA_SSEL0/CT_INP0/SCT_GPI1/SD1_CLK/CMP0_OUT/SECURE_GPIO0_1, label: EPD_DC, identifier: EPD_DC}
- {pin_num: '12', pin_signal: PIO0_23/MCLK/CTIMER1_MAT2/CTIMER3_MAT3/SCT0_OUT4/FC0_CTS_SDA_SSEL0/SD1_D1/SECURE_GPIO0_23/ADC0_0, label: MCLK, identifier: MCLK}
- {pin_num: '50', pin_signal: PIO0_22/FC6_TXD_SCL_MISO_WS/UTICK_CAP1/CT_INP15/SCT0_OUT3/USB0_VBUS/SD1_D0/PLU_OUT7/SECURE_GPIO0_22, label: SW_SEL, identifier: SW_;SW_SEL}
- {pin_num: '52', pin_signal: PIO0_2/FC3_TXD_SCL_MISO_WS/CT_INP1/SCT0_OUT0/SCT_GPI2/SECURE_GPIO0_2, label: EPD_BUSY, identifier: EPD_BUSY}
- {pin_num: '56', pin_signal: PIO0_5/FC4_RXD_SDA_MOSI_DATA/CTIMER3_MAT0/SCT_GPI5/FC3_RTS_SCL_SSEL1/MCLK/SECURE_GPIO0_5, label: SW_PLUS, identifier: SW_PLUS}
- {pin_num: '59', pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/SD1_D2/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29, label: SW_MIN, identifier: SW_MIN}
- {pin_num: '60', pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/SD1_D3/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30, label: SW_BACK, identifier: SW_BACK}
- {pin_num: '13', pin_signal: PIO0_10/FC6_SCK/CT_INP10/CTIMER2_MAT0/FC1_TXD_SCL_MISO_WS/SCT0_OUT2/SWO/SECURE_GPIO0_10/ADC0_1, label: LED, identifier: LED}
- {pin_num: '18', pin_signal: PIO0_27/FC2_TXD_SCL_MISO_WS/CTIMER3_MAT2/SCT0_OUT6/FC7_RXD_SDA_MOSI_DATA/PLU_OUT0/SECURE_GPIO0_27, label: PMIC_ON_REQ, identifier: PMIC_ON_REQ}
- {pin_num: '38', pin_signal: PIO0_18/FC4_CTS_SDA_SSEL0/SD0_WR_PRT/CTIMER1_MAT0/SCT0_OUT1/PLU_IN3/SECURE_GPIO0_18/ACMP0_C, label: CODEC_RST, identifier: CODEC_RST}
- {pin_num: '40', pin_signal: PIO0_26/FC2_RXD_SDA_MOSI_DATA/CLKOUT/CT_INP14/SCT0_OUT5/USB0_IDVALUE/FC0_SCK/HS_SPI_MOSI/SECURE_GPIO0_26, label: USB_SUSPEND, identifier: USB_SUSPEND}
- {pin_num: '41', pin_signal: PIO1_2/CTIMER0_MAT3/SCT_GPI6/HS_SPI_SCK/USB1_PORTPWRN/PLU_OUT5, label: CHRG, identifier: CHRG}
- {pin_num: '42', pin_signal: PIO1_3/SCT0_OUT4/HS_SPI_MISO/USB0_PORTPWRN/PLU_OUT6, label: PB_STAT, identifier: PB_STAT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '1', peripheral: SDIF, signal: SD0_CLK, pin_signal: PIO0_7/FC3_RTS_SCL_SSEL1/SD0_CLK/FC5_SCK/FC1_SCK/SECURE_GPIO0_7}
  - {pin_num: '17', peripheral: SDIF, signal: SD0_CMD, pin_signal: PIO0_8/FC3_SSEL3/SD0_CMD/FC5_RXD_SDA_MOSI_DATA/SWO/SECURE_GPIO0_8}
  - {pin_num: '45', peripheral: SDIF, signal: 'SD0_D, 0', pin_signal: PIO0_24/FC0_RXD_SDA_MOSI_DATA/SD0_D0/CT_INP8/SCT_GPI0/SECURE_GPIO0_24}
  - {pin_num: '51', peripheral: SDIF, signal: 'SD0_D, 1', pin_signal: PIO0_25/FC0_TXD_SCL_MISO_WS/SD0_D1/CT_INP9/SCT_GPI1/SECURE_GPIO0_25}
  - {pin_num: '15', peripheral: SDIF, signal: 'SD0_D, 2', pin_signal: PIO0_31/FC0_CTS_SDA_SSEL0/SD0_D2/CTIMER0_MAT1/SCT0_OUT3/SECURE_GPIO0_31/ADC0_3}
  - {pin_num: '4', peripheral: SDIF, signal: 'SD0_D, 3', pin_signal: PIO1_0/FC0_RTS_SCL_SSEL1/SD0_D3/CT_INP2/SCT_GPI4/PLU_OUT3/ADC0_11}
  - {pin_num: '37', peripheral: SDIF, signal: SD0_POW_EN, pin_signal: PIO0_9/FC3_SSEL2/SD0_POW_EN/FC5_TXD_SCL_MISO_WS/SECURE_GPIO0_9/ACMP0_B}
  - {pin_num: '3', peripheral: SDIF, signal: SD0_CARD_DET, pin_signal: PIO0_17/FC4_SSEL2/SD0_CARD_DET_N/SCT_GPI7/SCT0_OUT0/SD0_CARD_INT_N/PLU_IN2/SECURE_GPIO0_17}
  - {pin_num: '2', peripheral: GPIO, signal: 'PIO0, 1', pin_signal: PIO0_1/FC3_CTS_SDA_SSEL0/CT_INP0/SCT_GPI1/SD1_CLK/CMP0_OUT/SECURE_GPIO0_1, direction: OUTPUT}
  - {pin_num: '5', peripheral: SWD, signal: SWDIO, pin_signal: PIO0_12/FC3_TXD_SCL_MISO_WS/SD1_BACKEND_PWR/FREQME_GPIO_CLK_B/SCT_GPI7/SD0_POW_EN/SWDIO/FC6_TXD_SCL_MISO_WS/SECURE_GPIO0_12/ADC0_10}
  - {pin_num: '6', peripheral: SWD, signal: SWCLK, pin_signal: PIO0_11/FC6_RXD_SDA_MOSI_DATA/CTIMER2_MAT2/FREQME_GPIO_CLK_A/SWCLK/SECURE_GPIO0_11/ADC0_9}
  - {pin_num: '12', peripheral: SYSCON, signal: MCLK, pin_signal: PIO0_23/MCLK/CTIMER1_MAT2/CTIMER3_MAT3/SCT0_OUT4/FC0_CTS_SDA_SSEL0/SD1_D1/SECURE_GPIO0_23/ADC0_0,
    direction: INPUT}
  - {pin_num: '46', peripheral: FLEXCOMM1, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_13/FC1_CTS_SDA_SSEL0/UTICK_CAP0/CT_INP0/SCT_GPI0/FC1_RXD_SDA_MOSI_DATA/PLU_IN0/SECURE_GPIO0_13}
  - {pin_num: '47', peripheral: FLEXCOMM1, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_14/FC1_RTS_SCL_SSEL1/UTICK_CAP1/CT_INP1/SCT_GPI1/FC1_TXD_SCL_MISO_WS/PLU_IN1/SECURE_GPIO0_14}
  - {pin_num: '48', peripheral: FLEXCOMM7, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_20/FC3_CTS_SDA_SSEL0/CTIMER1_MAT1/CT_INP15/SCT_GPI2/FC7_RXD_SDA_MOSI_DATA/HS_SPI_SSEL0/PLU_IN5/SECURE_GPIO0_20/FC4_TXD_SCL_MISO_WS}
  - {pin_num: '49', peripheral: FLEXCOMM7, signal: SCK, pin_signal: PIO0_21/FC3_RTS_SCL_SSEL1/UTICK_CAP3/CTIMER3_MAT3/SCT_GPI3/FC7_SCK/PLU_CLKIN/SECURE_GPIO0_21}
  - {pin_num: '50', peripheral: GPIO, signal: 'PIO0, 22', pin_signal: PIO0_22/FC6_TXD_SCL_MISO_WS/UTICK_CAP1/CT_INP15/SCT0_OUT3/USB0_VBUS/SD1_D0/PLU_OUT7/SECURE_GPIO0_22,
    identifier: SW_SEL, direction: INPUT, mode: pullUp}
  - {pin_num: '52', peripheral: GPIO, signal: 'PIO0, 2', pin_signal: PIO0_2/FC3_TXD_SCL_MISO_WS/CT_INP1/SCT0_OUT0/SCT_GPI2/SECURE_GPIO0_2, direction: INPUT}
  - {pin_num: '53', peripheral: FLEXCOMM3, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_3/FC3_RXD_SDA_MOSI_DATA/CTIMER0_MAT1/SCT0_OUT1/SCT_GPI3/SECURE_GPIO0_3}
  - {pin_num: '55', peripheral: FLEXCOMM3, signal: CTS_SDA_SSEL0, pin_signal: PIO0_4/FC4_SCK/CT_INP12/SCT_GPI4/FC3_CTS_SDA_SSEL0/SECURE_GPIO0_4}
  - {pin_num: '56', peripheral: GPIO, signal: 'PIO0, 5', pin_signal: PIO0_5/FC4_RXD_SDA_MOSI_DATA/CTIMER3_MAT0/SCT_GPI5/FC3_RTS_SCL_SSEL1/MCLK/SECURE_GPIO0_5, direction: INPUT}
  - {pin_num: '57', peripheral: FLEXCOMM3, signal: SCK, pin_signal: PIO0_6/FC3_SCK/CT_INP13/CTIMER4_MAT0/SCT_GPI6/SECURE_GPIO0_6}
  - {pin_num: '58', peripheral: FLEXCOMM7, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_19/FC4_RTS_SCL_SSEL1/UTICK_CAP0/CTIMER0_MAT2/SCT0_OUT2/FC7_TXD_SCL_MISO_WS/PLU_IN4/SECURE_GPIO0_19}
  - {pin_num: '59', peripheral: GPIO, signal: 'PIO0, 29', pin_signal: PIO0_29/FC0_RXD_SDA_MOSI_DATA/SD1_D2/CTIMER2_MAT3/SCT0_OUT8/CMP0_OUT/PLU_OUT2/SECURE_GPIO0_29,
    direction: INPUT}
  - {pin_num: '60', peripheral: GPIO, signal: 'PIO0, 30', pin_signal: PIO0_30/FC0_TXD_SCL_MISO_WS/SD1_D3/CTIMER0_MAT0/SCT0_OUT9/SECURE_GPIO0_30, direction: INPUT}
  - {pin_num: '13', peripheral: GPIO, signal: 'PIO0, 10', pin_signal: PIO0_10/FC6_SCK/CT_INP10/CTIMER2_MAT0/FC1_TXD_SCL_MISO_WS/SCT0_OUT2/SWO/SECURE_GPIO0_10/ADC0_1,
    direction: OUTPUT}
  - {pin_num: '18', peripheral: GPIO, signal: 'PIO0, 27', pin_signal: PIO0_27/FC2_TXD_SCL_MISO_WS/CTIMER3_MAT2/SCT0_OUT6/FC7_RXD_SDA_MOSI_DATA/PLU_OUT0/SECURE_GPIO0_27,
    direction: OUTPUT, gpio_init_state: 'true'}
  - {pin_num: '38', peripheral: GPIO, signal: 'PIO0, 18', pin_signal: PIO0_18/FC4_CTS_SDA_SSEL0/SD0_WR_PRT/CTIMER1_MAT0/SCT0_OUT1/PLU_IN3/SECURE_GPIO0_18/ACMP0_C,
    direction: OUTPUT}
  - {pin_num: '40', peripheral: GPIO, signal: 'PIO0, 26', pin_signal: PIO0_26/FC2_RXD_SDA_MOSI_DATA/CLKOUT/CT_INP14/SCT0_OUT5/USB0_IDVALUE/FC0_SCK/HS_SPI_MOSI/SECURE_GPIO0_26,
    direction: OUTPUT}
  - {pin_num: '41', peripheral: GPIO, signal: 'PIO1, 2', pin_signal: PIO1_2/CTIMER0_MAT3/SCT_GPI6/HS_SPI_SCK/USB1_PORTPWRN/PLU_OUT5, direction: INPUT}
  - {pin_num: '42', peripheral: GPIO, signal: 'PIO1, 3', pin_signal: PIO1_3/SCT0_OUT4/HS_SPI_MISO/USB0_PORTPWRN/PLU_OUT6, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M33 (Core #0) */
void BOARD_InitPins(void)
{
    /* Enables the clock for the I/O controller.: Enable Clock. */
    CLOCK_EnableClock(kCLOCK_Iocon);

    /* Enables the clock for the GPIO0 module */
    CLOCK_EnableClock(kCLOCK_Gpio0);

    /* Enables the clock for the GPIO1 module */
    CLOCK_EnableClock(kCLOCK_Gpio1);

    gpio_pin_config_t EPD_DC_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_1 (pin 2)  */
    GPIO_PinInit(BOARD_INITPINS_EPD_DC_GPIO, BOARD_INITPINS_EPD_DC_PORT, BOARD_INITPINS_EPD_DC_PIN, &EPD_DC_config);

    gpio_pin_config_t EPD_BUSY_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_2 (pin 52)  */
    GPIO_PinInit(BOARD_INITPINS_EPD_BUSY_GPIO, BOARD_INITPINS_EPD_BUSY_PORT, BOARD_INITPINS_EPD_BUSY_PIN, &EPD_BUSY_config);

    gpio_pin_config_t SW_PLUS_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_5 (pin 56)  */
    GPIO_PinInit(BOARD_INITPINS_SW_PLUS_GPIO, BOARD_INITPINS_SW_PLUS_PORT, BOARD_INITPINS_SW_PLUS_PIN, &SW_PLUS_config);

    gpio_pin_config_t LED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_10 (pin 13)  */
    GPIO_PinInit(BOARD_INITPINS_LED_GPIO, BOARD_INITPINS_LED_PORT, BOARD_INITPINS_LED_PIN, &LED_config);

    gpio_pin_config_t CODEC_RST_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_18 (pin 38)  */
    GPIO_PinInit(BOARD_INITPINS_CODEC_RST_GPIO, BOARD_INITPINS_CODEC_RST_PORT, BOARD_INITPINS_CODEC_RST_PIN, &CODEC_RST_config);

    gpio_pin_config_t SW_SEL_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_22 (pin 50)  */
    GPIO_PinInit(BOARD_INITPINS_SW_SEL_GPIO, BOARD_INITPINS_SW_SEL_PORT, BOARD_INITPINS_SW_SEL_PIN, &SW_SEL_config);

    gpio_pin_config_t USB_SUSPEND_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_26 (pin 40)  */
    GPIO_PinInit(BOARD_INITPINS_USB_SUSPEND_GPIO, BOARD_INITPINS_USB_SUSPEND_PORT, BOARD_INITPINS_USB_SUSPEND_PIN, &USB_SUSPEND_config);

    gpio_pin_config_t PMIC_ON_REQ_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PIO0_27 (pin 18)  */
    GPIO_PinInit(BOARD_INITPINS_PMIC_ON_REQ_GPIO, BOARD_INITPINS_PMIC_ON_REQ_PORT, BOARD_INITPINS_PMIC_ON_REQ_PIN, &PMIC_ON_REQ_config);

    gpio_pin_config_t SW_MIN_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_29 (pin 59)  */
    GPIO_PinInit(BOARD_INITPINS_SW_MIN_GPIO, BOARD_INITPINS_SW_MIN_PORT, BOARD_INITPINS_SW_MIN_PIN, &SW_MIN_config);

    gpio_pin_config_t SW_BACK_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO0_30 (pin 60)  */
    GPIO_PinInit(BOARD_INITPINS_SW_BACK_GPIO, BOARD_INITPINS_SW_BACK_PORT, BOARD_INITPINS_SW_BACK_PIN, &SW_BACK_config);

    gpio_pin_config_t CHRG_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_2 (pin 41)  */
    GPIO_PinInit(BOARD_INITPINS_CHRG_GPIO, BOARD_INITPINS_CHRG_PORT, BOARD_INITPINS_CHRG_PIN, &CHRG_config);

    gpio_pin_config_t PB_STAT_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO1_3 (pin 42)  */
    GPIO_PinInit(BOARD_INITPINS_PB_STAT_GPIO, BOARD_INITPINS_PB_STAT_PORT, BOARD_INITPINS_PB_STAT_PIN, &PB_STAT_config);

    IOCON->PIO[0][1] = ((IOCON->PIO[0][1] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT01 (pin 2) is configured as PIO0_1. */
                        | IOCON_PIO_FUNC(PIO0_1_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_1_DIGIMODE_DIGITAL));

    IOCON->PIO[0][10] = ((IOCON->PIO[0][10] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT010 (pin 13) is configured as PIO0_10. */
                         | IOCON_PIO_FUNC(PIO0_10_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_10_DIGIMODE_DIGITAL));

    IOCON->PIO[0][11] = ((IOCON->PIO[0][11] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT011 (pin 6) is configured as SWCLK. */
                         | IOCON_PIO_FUNC(PIO0_11_FUNC_ALT6)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_11_DIGIMODE_DIGITAL));

    IOCON->PIO[0][12] = ((IOCON->PIO[0][12] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT012 (pin 5) is configured as SWDIO. */
                         | IOCON_PIO_FUNC(PIO0_12_FUNC_ALT6)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_12_DIGIMODE_DIGITAL));

    IOCON->PIO[0][13] = ((IOCON->PIO[0][13] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT013 (pin 46) is configured as FC1_RXD_SDA_MOSI_DATA. */
                         | IOCON_PIO_FUNC(PIO0_13_FUNC_ALT5)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_13_DIGIMODE_DIGITAL));

    IOCON->PIO[0][14] = ((IOCON->PIO[0][14] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT014 (pin 47) is configured as FC1_TXD_SCL_MISO_WS. */
                         | IOCON_PIO_FUNC(PIO0_14_FUNC_ALT6)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_14_DIGIMODE_DIGITAL));

    IOCON->PIO[0][17] = ((IOCON->PIO[0][17] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT017 (pin 3) is configured as SD0_CARD_DET_N. */
                         | IOCON_PIO_FUNC(PIO0_17_FUNC_ALT2)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_17_DIGIMODE_DIGITAL));

    IOCON->PIO[0][18] = ((IOCON->PIO[0][18] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT018 (pin 38) is configured as PIO0_18. */
                         | IOCON_PIO_FUNC(PIO0_18_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_18_DIGIMODE_DIGITAL));

    IOCON->PIO[0][19] = ((IOCON->PIO[0][19] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT019 (pin 58) is configured as FC7_TXD_SCL_MISO_WS. */
                         | IOCON_PIO_FUNC(PIO0_19_FUNC_ALT7)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_19_DIGIMODE_DIGITAL));

    IOCON->PIO[0][2] = ((IOCON->PIO[0][2] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT02 (pin 52) is configured as PIO0_2. */
                        | IOCON_PIO_FUNC(PIO0_2_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_2_DIGIMODE_DIGITAL));

    IOCON->PIO[0][20] = ((IOCON->PIO[0][20] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT020 (pin 48) is configured as FC7_RXD_SDA_MOSI_DATA. */
                         | IOCON_PIO_FUNC(PIO0_20_FUNC_ALT7)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_20_DIGIMODE_DIGITAL));

    IOCON->PIO[0][21] = ((IOCON->PIO[0][21] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT021 (pin 49) is configured as FC7_SCK. */
                         | IOCON_PIO_FUNC(PIO0_21_FUNC_ALT7)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_21_DIGIMODE_DIGITAL));

    IOCON->PIO[0][22] = ((IOCON->PIO[0][22] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_MODE_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT022 (pin 50) is configured as PIO0_22. */
                         | IOCON_PIO_FUNC(PIO0_22_FUNC_ALT0)

                         /* Selects function mode (on-chip pull-up/pull-down resistor control).
                          * : Pull-up.
                          * Pull-up resistor enabled. */
                         | IOCON_PIO_MODE(PIO0_22_MODE_PULL_UP)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_22_DIGIMODE_DIGITAL));

    IOCON->PIO[0][23] = ((IOCON->PIO[0][23] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT023 (pin 12) is configured as MCLK. */
                         | IOCON_PIO_FUNC(PIO0_23_FUNC_ALT1)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_23_DIGIMODE_DIGITAL));

    IOCON->PIO[0][24] = ((IOCON->PIO[0][24] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT024 (pin 45) is configured as SD0_D0. */
                         | IOCON_PIO_FUNC(PIO0_24_FUNC_ALT2)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_24_DIGIMODE_DIGITAL));

    IOCON->PIO[0][25] = ((IOCON->PIO[0][25] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT025 (pin 51) is configured as SD0_D1. */
                         | IOCON_PIO_FUNC(PIO0_25_FUNC_ALT2)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_25_DIGIMODE_DIGITAL));

    IOCON->PIO[0][26] = ((IOCON->PIO[0][26] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT026 (pin 40) is configured as PIO0_26. */
                         | IOCON_PIO_FUNC(PIO0_26_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_26_DIGIMODE_DIGITAL));

    IOCON->PIO[0][27] = ((IOCON->PIO[0][27] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT027 (pin 18) is configured as PIO0_27. */
                         | IOCON_PIO_FUNC(PIO0_27_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_27_DIGIMODE_DIGITAL));

    IOCON->PIO[0][29] = ((IOCON->PIO[0][29] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT029 (pin 59) is configured as PIO0_29. */
                         | IOCON_PIO_FUNC(PIO0_29_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_29_DIGIMODE_DIGITAL));

    IOCON->PIO[0][3] = ((IOCON->PIO[0][3] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT03 (pin 53) is configured as FC3_RXD_SDA_MOSI_DATA. */
                        | IOCON_PIO_FUNC(PIO0_3_FUNC_ALT1)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_3_DIGIMODE_DIGITAL));

    IOCON->PIO[0][30] = ((IOCON->PIO[0][30] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT030 (pin 60) is configured as PIO0_30. */
                         | IOCON_PIO_FUNC(PIO0_30_FUNC_ALT0)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_30_DIGIMODE_DIGITAL));

    IOCON->PIO[0][31] = ((IOCON->PIO[0][31] &
                          /* Mask bits to zero which are setting */
                          (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                         /* Selects pin function.
                          * : PORT031 (pin 15) is configured as SD0_D2. */
                         | IOCON_PIO_FUNC(PIO0_31_FUNC_ALT2)

                         /* Select Digital mode.
                          * : Enable Digital mode.
                          * Digital input is enabled. */
                         | IOCON_PIO_DIGIMODE(PIO0_31_DIGIMODE_DIGITAL));

    IOCON->PIO[0][4] = ((IOCON->PIO[0][4] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT04 (pin 55) is configured as FC3_CTS_SDA_SSEL0. */
                        | IOCON_PIO_FUNC(0x08u)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_4_DIGIMODE_DIGITAL));

    IOCON->PIO[0][5] = ((IOCON->PIO[0][5] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT05 (pin 56) is configured as PIO0_5. */
                        | IOCON_PIO_FUNC(PIO0_5_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_5_DIGIMODE_DIGITAL));

    IOCON->PIO[0][6] = ((IOCON->PIO[0][6] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT06 (pin 57) is configured as FC3_SCK. */
                        | IOCON_PIO_FUNC(PIO0_6_FUNC_ALT1)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_6_DIGIMODE_DIGITAL));

    IOCON->PIO[0][7] = ((IOCON->PIO[0][7] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT07 (pin 1) is configured as SD0_CLK. */
                        | IOCON_PIO_FUNC(PIO0_7_FUNC_ALT2)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_7_DIGIMODE_DIGITAL));

    IOCON->PIO[0][8] = ((IOCON->PIO[0][8] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT08 (pin 17) is configured as SD0_CMD. */
                        | IOCON_PIO_FUNC(PIO0_8_FUNC_ALT2)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_8_DIGIMODE_DIGITAL));

    IOCON->PIO[0][9] = ((IOCON->PIO[0][9] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT09 (pin 37) is configured as SD0_POW_EN. */
                        | IOCON_PIO_FUNC(PIO0_9_FUNC_ALT2)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO0_9_DIGIMODE_DIGITAL));

    IOCON->PIO[1][0] = ((IOCON->PIO[1][0] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT10 (pin 4) is configured as SD0_D3. */
                        | IOCON_PIO_FUNC(PIO1_0_FUNC_ALT2)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_0_DIGIMODE_DIGITAL));

    IOCON->PIO[1][2] = ((IOCON->PIO[1][2] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT12 (pin 41) is configured as PIO1_2. */
                        | IOCON_PIO_FUNC(PIO1_2_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_2_DIGIMODE_DIGITAL));

    IOCON->PIO[1][3] = ((IOCON->PIO[1][3] &
                         /* Mask bits to zero which are setting */
                         (~(IOCON_PIO_FUNC_MASK | IOCON_PIO_DIGIMODE_MASK)))

                        /* Selects pin function.
                         * : PORT13 (pin 42) is configured as PIO1_3. */
                        | IOCON_PIO_FUNC(PIO1_3_FUNC_ALT0)

                        /* Select Digital mode.
                         * : Enable Digital mode.
                         * Digital input is enabled. */
                        | IOCON_PIO_DIGIMODE(PIO1_3_DIGIMODE_DIGITAL));

    SYSCON->MCLKIO = ((SYSCON->MCLKIO &
                       /* Mask bits to zero which are setting */
                       (~(SYSCON_MCLKIO_MCLKIO_MASK)))

                      /* MCLK control.
                       * : input mode. */
                      | SYSCON_MCLKIO_MCLKIO(MCLKIO_MCLKIO_INPUT));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/