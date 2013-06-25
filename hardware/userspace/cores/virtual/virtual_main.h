#ifndef virtual_main_h
#define virtual_main_h

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C"{
#endif

/* Definition and types for pins */
typedef enum _PinTypes
{
  GPIO,
  PWM,
  SPI,
  UART,
  I2C,
  ANALOG,
  LED
} PinTypes ;

/* Types used for the tables below */
typedef struct _PinDescription
{
  uint32_t headerPin ;
  uint32_t gpioPin ;
  PinTypes pinType ;
  uint32_t pinOffset ;
} PinDescription ;

/* Pins table to be instanciated into variant.cpp */
extern PinDescription g_APinDescription[] ;

#define SYSFS_GPIO_DIR "/sys/class/gpio"

#ifdef __cplusplus
}
#include "HardwareSerial.h"
#endif

#include "wiring.h"
#include "wiring_digital.h"

#endif
