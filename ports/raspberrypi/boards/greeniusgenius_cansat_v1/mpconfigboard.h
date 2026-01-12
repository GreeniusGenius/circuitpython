// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#define MICROPY_HW_BOARD_NAME "GreeniusGenius CanSat v1"
#define MICROPY_HW_MCU_NAME "rp2350b" //Using RP2350B instead of RP2354B due to compatibility

// I2C Buses
#define DEFAULT_I2C_BUS_SCL (&pin_GPIO9)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO8)

#define DEFAULT_I2C0_BUS_SCL (&pin_GPIO9)
#define DEFAULT_I2C0_BUS_SDA (&pin_GPIO8)

#define DEFAULT_I2C1_BUS_SCL (&pin_GPIO7)
#define DEFAULT_I2C1_BUS_SDA (&pin_GPIO6)

// SPI Buses
#define DEFAULT_SPI_BUS_CS (&pin_GPIO1)
#define DEFAULT_SPI_BUS_SCK (&pin_GPIO2)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO3)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO0)

#define DEFAULT_SPI0_BUS_CS (&pin_GPIO1)
#define DEFAULT_SPI0_BUS_SCK (&pin_GPIO2)
#define DEFAULT_SPI0_BUS_MOSI (&pin_GPIO3)
#define DEFAULT_SPI0_BUS_MISO (&pin_GPIO0)

#define DEFAULT_SPI1_BUS_CS (&pin_GPIO13)
#define DEFAULT_SPI1_BUS_SCK (&pin_GPIO10)
#define DEFAULT_SPI1_BUS_MOSI (&pin_GPIO11)
#define DEFAULT_SPI1_BUS_MISO (&pin_GPIO12)

// UART Buses
#define DEFAULT_UART_BUS_RX (&pin_GPIO17)
#define DEFAULT_UART_BUS_TX (&pin_GPIO16)

#define DEFAULT_UART0_BUS_RX (&pin_GPIO17)
#define DEFAULT_UART0_BUS_TX (&pin_GPIO16)

#define DEFAULT_UART1_BUS_RX (&pin_GPIO20)
#define DEFAULT_UART1_BUS_TX (&pin_GPIO23)

// Status LED
#define MICROPY_HW_LED_STATUS (&pin_GPIO25)

// SD Card Slot
#define DEFAULT_SD_CS (&pin_GPIO13)
#define DEFAULT_SD_SCK (&pin_GPIO10)
#define DEFAULT_SD_MOSI (&pin_GPIO11)
#define DEFAULT_SD_MISO (&pin_GPIO12)
#define DEFAULT_SD_CARD_DETECT (&pin_GPIO4)
#define DEFAULT_SD_CARD_INSERTED false
