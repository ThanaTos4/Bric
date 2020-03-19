EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 8
Title "Bric"
Date "2020-03-09"
Rev "R0.1"
Comp "EE300"
Comment1 "zephray@outlook.com"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 4800 2900 0    50   ~ 0
MPU_JTAG_TCK
Text Label 4800 3000 0    50   ~ 0
MPU_JTAG_TMS
$Comp
L Connector_Generic:Conn_02x05_Odd_Even J100
U 1 1 5D31C612
P 7300 5900
F 0 "J100" H 7350 6317 50  0000 C CNN
F 1 "Conn_02x05_Odd_Even" H 7350 6226 50  0000 C CNN
F 2 "Connector_PinHeader_1.27mm:PinHeader_2x05_P1.27mm_Vertical_SMD" H 7300 5900 50  0001 C CNN
F 3 "~" H 7300 5900 50  0001 C CNN
	1    7300 5900
	1    0    0    -1  
$EndComp
$Comp
L power:+3V3 #PWR0112
U 1 1 5D32043C
P 7000 5200
F 0 "#PWR0112" H 7000 5050 50  0001 C CNN
F 1 "+3V3" H 7015 5373 50  0000 C CNN
F 2 "" H 7000 5200 50  0001 C CNN
F 3 "" H 7000 5200 50  0001 C CNN
	1    7000 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:R R108
U 1 1 5D32601B
P 7700 5350
F 0 "R108" H 7770 5396 50  0000 L CNN
F 1 "10K" H 7770 5305 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 7630 5350 50  0001 C CNN
F 3 "~" H 7700 5350 50  0001 C CNN
	1    7700 5350
	1    0    0    -1  
$EndComp
Text Label 8100 5800 0    50   ~ 0
MPU_JTAG_TCK
Text Label 8100 5900 0    50   ~ 0
MPU_JTAG_TDO
Text Label 8100 5700 0    50   ~ 0
MPU_JTAG_TMS
Wire Wire Line
	7600 5700 7700 5700
Wire Wire Line
	7600 5800 8800 5800
Wire Wire Line
	7600 5900 8800 5900
Wire Wire Line
	7700 5500 7700 5700
Connection ~ 7700 5700
Wire Wire Line
	7700 5700 8800 5700
Wire Wire Line
	7700 5200 7000 5200
Wire Wire Line
	7100 5700 7000 5700
Wire Wire Line
	7000 5700 7000 5200
Connection ~ 7000 5200
$Comp
L power:GND #PWR0113
U 1 1 5D35B6F4
P 7000 6200
F 0 "#PWR0113" H 7000 5950 50  0001 C CNN
F 1 "GND" H 7005 6027 50  0000 C CNN
F 2 "" H 7000 6200 50  0001 C CNN
F 3 "" H 7000 6200 50  0001 C CNN
	1    7000 6200
	1    0    0    -1  
$EndComp
Wire Wire Line
	7100 5800 7000 5800
Wire Wire Line
	7000 5800 7000 5900
Wire Wire Line
	7100 5900 7000 5900
Connection ~ 7000 5900
Wire Wire Line
	7000 5900 7000 6200
NoConn ~ 7100 6000
$Comp
L Device:D_Schottky D100
U 1 1 5D37EF0D
P 7950 6100
F 0 "D100" H 7750 6150 50  0000 C CNN
F 1 "1N5819" H 8200 6150 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7950 6100 50  0001 C CNN
F 3 "~" H 7950 6100 50  0001 C CNN
	1    7950 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7800 6100 7600 6100
Text Notes 8200 5500 0    100  ~ 0
ARM JTAG
Text GLabel 6700 2100 2    50   Input ~ 0
PB_STAT
Wire Wire Line
	6700 2100 6500 2100
Text GLabel 4200 4400 2    50   Output ~ 0
USB_SUSPEND
Wire Wire Line
	4200 4400 4000 4400
Text GLabel 4200 4500 2    50   Output ~ 0
PMIC_ON_REQ
Wire Wire Line
	4200 4500 4000 4500
NoConn ~ 7100 6100
Text GLabel 4200 4100 2    50   Input ~ 0
SAI1_MCLK
Text GLabel 4200 3900 2    50   Output ~ 0
SAI1_TXC
Text GLabel 4200 3700 2    50   Output ~ 0
SAI1_TXFS
Text GLabel 4200 3800 2    50   Output ~ 0
SAI1_TXD
Wire Wire Line
	4000 3800 4200 3800
Wire Wire Line
	4000 3900 4200 3900
Wire Wire Line
	4000 3700 4200 3700
Text Notes 5200 3800 2    50   ~ 0
To Audio DAC\n
Text GLabel 4200 2700 2    50   Output ~ 0
~SD0_PWR_EN
Text GLabel 4200 2500 2    50   Output ~ 0
SD0_CLK
Text GLabel 4200 2600 2    50   Output ~ 0
SD0_CMD
Text GLabel 4200 4200 2    50   Output ~ 0
SD0_D0
Text GLabel 4200 4300 2    50   Output ~ 0
SD0_D1
Text GLabel 4200 4900 2    50   Output ~ 0
SD0_D2
Text GLabel 6700 1800 2    50   Output ~ 0
SD0_D3
Text GLabel 4200 3500 2    50   Input ~ 0
~SD0_CD
Wire Wire Line
	4900 1400 4500 1400
$Comp
L Device:R R111
U 1 1 5DA7199D
P 4900 1550
F 0 "R111" H 4970 1596 50  0000 L CNN
F 1 "10K" H 4970 1505 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4830 1550 50  0001 C CNN
F 3 "~" H 4900 1550 50  0001 C CNN
	1    4900 1550
	1    0    0    -1  
$EndComp
$Comp
L Device:R R110
U 1 1 5DA710EB
P 4500 1550
F 0 "R110" H 4570 1596 50  0000 L CNN
F 1 "10K" H 4570 1505 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4430 1550 50  0001 C CNN
F 3 "~" H 4500 1550 50  0001 C CNN
	1    4500 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 3100 4500 3100
Wire Wire Line
	4500 1700 4500 3100
Wire Wire Line
	4900 1700 4900 3200
Wire Wire Line
	4000 3200 4900 3200
Connection ~ 4900 3200
Wire Wire Line
	4900 3200 5100 3200
Connection ~ 4500 3100
Wire Wire Line
	4500 3100 5100 3100
Text GLabel 5100 3100 2    50   BiDi ~ 0
I2C1_SDA
Text GLabel 5100 3200 2    50   Output ~ 0
I2C1_SCL
Wire Wire Line
	4000 2900 5400 2900
Wire Wire Line
	4000 3000 5400 3000
Wire Wire Line
	4200 2700 4000 2700
Wire Wire Line
	4000 2600 4200 2600
Wire Wire Line
	4000 2500 4200 2500
Wire Wire Line
	4000 4200 4200 4200
Wire Wire Line
	4000 4300 4200 4300
Wire Wire Line
	4000 4900 4200 4900
Wire Wire Line
	4200 3500 4000 3500
Wire Wire Line
	6700 1800 6500 1800
Wire Wire Line
	4000 4100 4200 4100
Wire Wire Line
	4000 2300 4200 2300
Wire Wire Line
	4000 4000 4200 4000
Wire Wire Line
	4000 4800 4200 4800
Wire Wire Line
	4000 4700 4200 4700
Text GLabel 4200 4700 2    50   Input ~ 0
SW_MIN
Text GLabel 4200 4000 2    50   Input ~ 0
SW_SEL
Text GLabel 4200 2300 2    50   Input ~ 0
SW_PLUS
Text GLabel 4200 4800 2    50   Input ~ 0
SW_BACK
Text GLabel 8300 6100 2    50   Output ~ 0
POR
Wire Wire Line
	8100 6100 8300 6100
$Comp
L Device:LED D?
U 1 1 5D7B1EE5
P 5250 5950
AR Path="/5D4C99F9/5D7B1EE5" Ref="D?"  Part="1" 
AR Path="/5D180A01/5D7B1EE5" Ref="D101"  Part="1" 
F 0 "D101" H 5200 6050 50  0000 C CNN
F 1 "LED" H 5350 6050 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric" H 5250 5950 50  0001 C CNN
F 3 "~" H 5250 5950 50  0001 C CNN
	1    5250 5950
	-1   0    0    1   
$EndComp
$Comp
L Device:R R?
U 1 1 5D7B1EEB
P 5550 5950
AR Path="/5D4C99F9/5D7B1EEB" Ref="R?"  Part="1" 
AR Path="/5D180A01/5D7B1EEB" Ref="R100"  Part="1" 
F 0 "R100" V 5450 5850 50  0000 C CNN
F 1 "1K" V 5450 6000 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5480 5950 50  0001 C CNN
F 3 "~" H 5550 5950 50  0001 C CNN
	1    5550 5950
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5D7B1EF1
P 5800 6050
AR Path="/5D4C99F9/5D7B1EF1" Ref="#PWR?"  Part="1" 
AR Path="/5D180A01/5D7B1EF1" Ref="#PWR0116"  Part="1" 
F 0 "#PWR0116" H 5800 5800 50  0001 C CNN
F 1 "GND" H 5805 5877 50  0000 C CNN
F 2 "" H 5800 6050 50  0001 C CNN
F 3 "" H 5800 6050 50  0001 C CNN
	1    5800 6050
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 5950 5800 5950
Wire Wire Line
	5800 5950 5800 6050
Text Label 4200 2800 0    50   ~ 0
LED
Wire Wire Line
	4000 2800 4350 2800
Text Label 4900 5950 0    50   ~ 0
LED
Wire Wire Line
	4900 5950 5100 5950
$Comp
L power:+3V3 #PWR0106
U 1 1 5DB9934B
P 4500 1400
F 0 "#PWR0106" H 4500 1250 50  0001 C CNN
F 1 "+3V3" H 4515 1573 50  0000 C CNN
F 2 "" H 4500 1400 50  0001 C CNN
F 3 "" H 4500 1400 50  0001 C CNN
	1    4500 1400
	1    0    0    -1  
$EndComp
Connection ~ 4500 1400
Text GLabel 4200 3600 2    50   Output ~ 0
CODEC_RST
Wire Wire Line
	4000 3600 4200 3600
$Comp
L symbols:LPC5500_FBD64 U100
U 3 1 5E9E4AC8
P 3700 2000
AR Path="/5E9E4AC8" Ref="U100"  Part="3" 
AR Path="/5D180A01/5E9E4AC8" Ref="U100"  Part="3" 
F 0 "U100" H 3642 2465 50  0000 C CNN
F 1 "LPC5500_FBD64" H 3642 2374 50  0000 C CNN
F 2 "Package_QFP:LQFP-64-1EP_10x10mm_P0.5mm_EP5x5mm_ThermalVias" H 3700 2400 50  0001 C CNN
F 3 "" H 3600 2050 50  0001 C CNN
	3    3700 2000
	-1   0    0    -1  
$EndComp
$Comp
L symbols:LPC5500_FBD64 U100
U 4 1 5E9EF415
P 6200 2000
AR Path="/5E9EF415" Ref="U100"  Part="4" 
AR Path="/5D180A01/5E9EF415" Ref="U100"  Part="4" 
F 0 "U100" H 6142 2465 50  0000 C CNN
F 1 "LPC5500_FBD64" H 6142 2374 50  0000 C CNN
F 2 "Package_QFP:LQFP-64-1EP_10x10mm_P0.5mm_EP5x5mm_ThermalVias" H 6200 2400 50  0001 C CNN
F 3 "" H 6100 2050 50  0001 C CNN
	4    6200 2000
	-1   0    0    -1  
$EndComp
Text Notes 5450 3000 0    50   ~ 0
SWCLK\nSWDIO
Text GLabel 4200 2000 2    50   Input ~ 0
EPD_BUSY
Text GLabel 4200 2100 2    50   Output ~ 0
SPI_MOSI
Text GLabel 4200 2200 2    50   Output ~ 0
SPI_SSEL0
Text GLabel 4200 2400 2    50   Output ~ 0
SPI_SCK
Wire Wire Line
	4200 2400 4000 2400
Wire Wire Line
	4200 2200 4000 2200
Wire Wire Line
	4200 2100 4000 2100
Wire Wire Line
	4200 2000 4000 2000
Text GLabel 6700 2000 2    50   Input ~ 0
CHRG
Wire Wire Line
	6700 2000 6500 2000
Text GLabel 4200 1900 2    50   Output ~ 0
EPD_DC
Wire Wire Line
	4000 1900 4200 1900
NoConn ~ 6500 1900
NoConn ~ 7600 6000
$EndSCHEMATC
