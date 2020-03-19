/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v7.0
processor: LPC5528
package_id: LPC5528JBD64
mcu_data: ksdk2_0
processor_version: 7.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: b57e2990-f8b1-45df-88ac-a033c6a93185
  called_from_default_init: true
  selectedCore: cm33_core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * FLEXCOMM1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FLEXCOMM1'
- type: 'flexcomm_i2c'
- mode: 'I2C_Polling'
- custom_name_enabled: 'false'
- type_id: 'flexcomm_i2c_567d1a9d97c12e5d39b00259c3436dc4'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXCOMM1'
- config_sets:
  - fsl_i2c:
    - i2c_mode: 'kI2C_Master'
    - clockSource: 'FXCOMFunctionClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - i2c_master_config:
      - enableMaster: 'true'
      - baudRate_Bps: '100000'
      - enableTimeout: 'false'
    - quick_selection: 'QS_I2C_Master'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const i2c_master_config_t FLEXCOMM1_config = {
  .enableMaster = true,
  .baudRate_Bps = 100000,
  .enableTimeout = false
};

void FLEXCOMM1_init(void) {
  RESET_PeripheralReset( kFC1_RST_SHIFT_RSTn);
  /* Initialization function */
  I2C_MasterInit(FLEXCOMM1_PERIPHERAL, &FLEXCOMM1_config, FLEXCOMM1_CLOCK_SOURCE);
}

/***********************************************************************************************************************
 * FLEXCOMM3 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FLEXCOMM3'
- type: 'flexcomm_spi'
- mode: 'SPI_Polling'
- custom_name_enabled: 'false'
- type_id: 'flexcomm_spi_481dadba00035f986f31ed9ac95af181'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXCOMM3'
- config_sets:
  - fsl_spi:
    - spi_mode: 'kSPI_Master'
    - clockSource: 'FXCOMFunctionClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - spi_master_config:
      - enableLoopback: 'false'
      - enableMaster: 'true'
      - polarity: 'kSPI_ClockPolarityActiveHigh'
      - phase: 'kSPI_ClockPhaseFirstEdge'
      - direction: 'kSPI_MsbFirst'
      - baudRate_Bps: '12000000'
      - dataWidth: 'kSPI_Data8Bits'
      - sselNum: 'kSPI_Ssel0'
      - sselPol_set: ''
      - txWatermark: 'kSPI_TxFifo0'
      - rxWatermark: 'kSPI_RxFifo1'
      - delayConfig:
        - preDelay: '0'
        - postDelay: '0'
        - frameDelay: '0'
        - transferDelay: '0'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const spi_master_config_t FLEXCOMM3_config = {
  .enableLoopback = false,
  .enableMaster = true,
  .polarity = kSPI_ClockPolarityActiveHigh,
  .phase = kSPI_ClockPhaseFirstEdge,
  .direction = kSPI_MsbFirst,
  .baudRate_Bps = 12000000,
  .dataWidth = kSPI_Data8Bits,
  .sselNum = kSPI_Ssel0,
  .sselPol = kSPI_SpolActiveAllLow,
  .txWatermark = kSPI_TxFifo0,
  .rxWatermark = kSPI_RxFifo1,
  .delayConfig = {
    .preDelay = 0,
    .postDelay = 0,
    .frameDelay = 0,
    .transferDelay = 0
  }
};

void FLEXCOMM3_init(void) {
  RESET_PeripheralReset( kFC3_RST_SHIFT_RSTn);
  /* Initialization function */
  SPI_MasterInit(FLEXCOMM3_PERIPHERAL, &FLEXCOMM3_config, FLEXCOMM3_CLOCK_SOURCE);
}

/***********************************************************************************************************************
 * FLEXCOMM7 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FLEXCOMM7'
- type: 'flexcomm_i2s'
- mode: 'I2S_Interrupt'
- custom_name_enabled: 'false'
- type_id: 'flexcomm_i2s_d821d1d3dded76c4d4194ae52cbf73a5'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXCOMM7'
- config_sets:
  - interrupt:
    - interrupt_sel: 'kI2S_TxLevelFlag'
    - enable_irq: 'true'
    - interrupt:
      - IRQn: 'FLEXCOMM7_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'QS_IRQ_priority1'
  - fsl_i2s:
    - i2s_config:
      - usage: 'playback'
      - masterSlave: 'kI2S_MasterSlaveNormalMaster'
      - sckPolM: 'false'
      - wsPolM: 'false'
      - clockConfig:
        - sampleRate_Hz: 'kSAI_SampleRate44100Hz'
        - clockSource: 'FXCOMFunctionClock'
        - clockSourceFreq: 'BOARD_BootClockRUN'
        - masterClockDependency: 'false'
      - mode: 'kI2S_ModeI2sClassic'
      - dataLengthM: '24'
      - stereo: 'kSAI_Stereo'
      - i2s_mono_palcement: 'kSAI_Mono_Left'
      - positionM: '0'
      - frameLengthM: '64'
      - rightLow: 'false'
      - leftJust: 'false'
      - watermarkM_Tx: 'ki2s_TxFifo4'
      - txEmptyZeroTx: 'true'
      - pack48: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* Flexcomm I2S configuration */
const i2s_config_t FLEXCOMM7_config = {
  .masterSlave = kI2S_MasterSlaveNormalMaster,
  .mode = kI2S_ModeI2sClassic,
  .rightLow = false,
  .leftJust = false,
  .sckPol = false,
  .wsPol = false,
  .divider = 8,
  .oneChannel = false,
  .dataLength = 24,
  .frameLength = 64,
  .position = 0,
  .watermark = 4,
  .txEmptyZero = true,
  .pack48 = false
};

void FLEXCOMM7_init(void) {
  RESET_PeripheralReset(kFC7_RST_SHIFT_RSTn);
  /* Flexcomm I2S initialization */
  I2S_TxInit(FLEXCOMM7_PERIPHERAL, &FLEXCOMM7_config);
  /* Enable interrupts */
  I2S_EnableInterrupts(FLEXCOMM7_PERIPHERAL, (kI2S_TxLevelFlag));
  /* Enable interrupt FLEXCOMM7_IRQn request in the NVIC */
  EnableIRQ(FLEXCOMM7_FLEXCOMM_IRQN);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  FLEXCOMM1_init();
  FLEXCOMM3_init();
  FLEXCOMM7_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}