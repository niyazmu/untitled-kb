#pragma once

#define MATRIX_ROWS 12
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { A3, A4, A5, A6, A7, B0, B1, B2, B10, B11, A1, A2 }
#define MATRIX_COL_PINS { B13, B14, B12, A0, A14, A15, B4, B3 }

#define DIODE_DIRECTION ROW2COL

#define DEFAULT_LAYER 0

#define LOCKING_SUPPORT_ENABLE

#define DEBOUNCE 5

// I2C config
// very important for this niche MCU
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1
#define I2C1_TIMINGR_PRESC 0x00U
#define I2C1_TIMINGR_SCLDEL 0x03U
#define I2C1_TIMINGR_SDADEL 0x01U
#define I2C1_TIMINGR_SCLH 0x03U
#define I2C1_TIMINGR_SCLL 0x09U