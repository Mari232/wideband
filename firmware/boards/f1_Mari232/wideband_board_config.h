#pragma once

// TS settings
#define TS_SIGNATURE "rusEFI 2023.05.10.wideband_f1"

// Fundamental board constants
#define VCC_VOLTS (3.3f)
#define HALF_VCC (VCC_VOLTS / 2)
#define ADC_MAX_COUNT (4095)
#define ADC_OVERSAMPLE 24

// *******************************
//    Nernst voltage & ESR sense
// *******************************
#define NERNST_INPUT_GAIN (3.0f)

// *******************************
//        Battery Sensing
// *******************************
// 2K + 200 divider
#define BATTERY_INPUT_DIVIDER (200.0 / (200.0 + 2000.0))

// *******************************
//     Heater low side Sensing
// *******************************
// 2K + 200 divider
#define HEATER_INPUT_DIVIDER (200.0 / (200.0 + 2000.0))

// *******************************
//        Vm output Sensing
// *******************************
// 100K + 10K divider
#define VM_INPUT_DIVIDER (10.0 / (10.0 + 100.0))

#define AFR_CHANNELS 1
#define EGT_CHANNELS 1

// *******************************
//    Nernst voltage & ESR sense
// *******************************
#define VM_RESISTOR_VALUE (0)

// *******************************
//          AUX outputs
// *******************************
// OpAmp with 5.1K + 10K
#define AUXOUT_GAIN         ((5.10 + 10.0) / 10.0)

// *******************************
//   TunerStudio Primary Port
// *******************************
#define TS_PRIMARY_SERIAL_PORT	SD1
#define TS_PRIMARY_BAUDRATE		115200


// *******************************
//   MAX31855 spi port
// *******************************
#define EGT_SPI_DRIVER          (&SPID1)
