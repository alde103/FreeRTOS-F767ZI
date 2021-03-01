# NUCLEO-F767Z FreeRTOS Library for Arduino

This is a port of FreeRTOS 10 for the NUCLEO-F767ZI (STM32F767ZI) running Arduino framework.

This is based on [FreeRTOS-Teensy4](https://github.com/discord-intech/FreeRTOS-Teensy4) and Brian Amos's book [Hands On RTOS with Microcontrollers](https://github.com/PacktPublishing/Hands-On-RTOS-with-Microcontrollers).

This library has the purpose of integrating the examples of Brian Amos' book in PlataformIO with the Arduino framework. For a serious project that requires using a repository with better support, see [STM32FreeRTOS](https://github.com/stm32duino/STM32FreeRTOS).

The Arduino systick-ing is kept running after starting the scheduler, so delay, millis and micro work in tasks. For better performance, use vTaskDelay instead of delay.

The documentation for FreeRTOS is located [here](http://www.freertos.org/).

# Configuration

FreeRTOS has several configuration options, which can be specified from within the `FreeRTOSConfig.h` file.

This library provides a default FreeRTOS configuration file named `FreeRTOSConfig_Default.h`.

User can provide his own FreeRTOS configuration file at sketch level by adding his configuration in a file named `STM32FreeRTOSConfig.h`.

Or add extra FreeRTOS configuration to the default at sketch level by adding an extra configuration in a file named `STM32FreeRTOSConfig_extra.h`.