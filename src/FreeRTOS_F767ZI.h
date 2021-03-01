/**
 * \file
 * \brief FreeRTOS for NUCLEO-F767ZI
 */
#ifndef FreeRTOS_F767ZI_h
#define FreeRTOS_F767ZI_h

#ifndef __arm__
#error Nucleo-F767ZI required
#else  // __arm__

#include <Arduino.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "portmacro.h"

#endif  // __arm__
#endif  // NUCLEO-F767ZI_h