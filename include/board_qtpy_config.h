/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Raspberry Pi (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef BOARD_QTPY_H_
#define BOARD_QTPY_H_

#define PROBE_IO_RAW
#define PROBE_CDC_UART

// PIO config
#define PROBE_SM 0

// Pin SWDIO 24 == "SDA"
// Pin SWCLK 25 == "SCL"
#define PROBE_PIN_OFFSET 24
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 1) // 25
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 0) // 24

// SWCLK = 6 is the "SCK" pin
// SWDIO = 4 is the "MISO" pin
// #define PROBE_PIN_OFFSET 4
// #define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 2) // 6
// #define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 4) // 4
// Target reset config
#if false
#define PROBE_PIN_RESET 1
#endif

// UART config
#define PROBE_UART_TX 20  // Silkscreened "TX"
#define PROBE_UART_RX 5   // Silkscreened "RX"
#define PROBE_UART_INTERFACE uart1
#define PROBE_UART_BAUDRATE 115200

//#define PICOPROBE_USB_CONNECTED_LED 25

#define PROBE_PRODUCT_STRING "Picoprobe QtPy2040 (CMSIS-DAP)"

#endif
