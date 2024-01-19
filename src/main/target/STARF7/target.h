/*
 * This file is part of INAV Project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */


#pragma once

#define TARGET_BOARD_IDENTIFIER "STARF7"
#define USBD_PRODUCT_STRING  "STARF7"

#define LED0                    PA13
#define LED1                    PA14

#define BEEPER                  PC13
#define BEEPER_INVERTED

#define USE_I2C

#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11

// *************** SPI1 Gyro & ACC *******************
#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI1
#define MAX7456_CS_PIN          PB2

// *************** SPI3 SD BLACKBOX*******************
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW180_DEG
#define MPU6000_CS_PIN          PA15
#define MPU6000_SPI_BUS         BUS_SPI3

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C2
#define USE_MAG_ALL

#define TEMPERATURE_I2C_BUS     BUS_I2C2

// *************** I2C /Baro/Mag *********************
#define USE_BARO
#define USE_BARO_BMP280
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_MS5611
#define USE_BARO_DPS310

// *************** SPI2 OSD ***********************


#define USE_FLASHFS
#define FLASH_CS_PIN            PB12

#define USE_FLASH_M25P16
#define M25P16_SPI_BUS  BUS_SPI2
#define M25P16_CS_PIN   FLASH_CS_PIN
#define USE_FLASH_W25N01G          // 1Gb NAND flash support
#define W25N01G_SPI_BUS BUS_SPI2
#define W25N01G_CS_PIN   FLASH_CS_PIN
#define USE_FLASH_W25M             // Stacked die support
#define W25M_SPI_BUS    BUS_SPI2
#define W25M_CS_PIN   FLASH_CS_PIN
#define USE_FLASH_W25M512          // 512Kb (256Kb x 2 stacked) NOR flash support
#define W25M512_SPI_BUS BUS_SPI2
#define W25M512_CS_PIN   FLASH_CS_PIN
#define USE_FLASH_W25M02G          // 2Gb (1Gb x 2 stacked) NAND flash support
#define W25M02G_SPI_BUS BUS_SPI2
#define W25M02G_CS_PIN FLASH_CS_PIN

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT


// *************** UART *****************************
#define USB_IO
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PC10
#define UART3_RX_PIN            PC11

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_UART6
#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PB6
#define SOFTSERIAL_1_RX_PIN     PB6

#define SERIAL_PORT_COUNT       8

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART4

// #define USE_GPS
// #define SOFT_I2C
// #define I2C_DEVICE              (I2CINVALID)
// #define SOFT_I2C_SCL            PB6
// #define SOFT_I2C_SDA            PA8

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0

#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC1
#define ADC_CHANNEL_3_PIN           PC2
#define ADC_CHANNEL_4_PIN           PA4

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3

// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PC8 // VTX power switcher
#define PINIO2_PIN                  PC9 // 2xCamera switcher

// *************** LEDSTRIP ************************
#define USE_LED_STRIP
#define WS2811_PIN                  PA8

#define DEFAULT_FEATURES                (FEATURE_OSD | FEATURE_TELEMETRY | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TX_PROF_SEL | FEATURE_BLACKBOX | FEATURE_GPS)
#define CURRENT_METER_SCALE     179

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff

#define MAX_PWM_OUTPUT_PORTS        6
#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_OPFLOW_CXOF
#define USE_MSP_OVER_TELEMETRY

