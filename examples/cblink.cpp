#include "FreeRTOS_F767ZI.h"


// ++++ Tasks to toggle leds +++
void toggleGreenLed(void *arg)
{
  pinMode(LED_GREEN, OUTPUT);
  
  while (1)
  {
    vTaskDelay(250);
    digitalWrite(LED_GREEN, HIGH);

    vTaskDelay(250);
    digitalWrite(LED_GREEN, LOW);
  }
}

void toggleBlueLed(void *arg)
{
  pinMode(LED_BLUE, OUTPUT);
  
  while (1)
  {
    vTaskDelay(500);
    digitalWrite(LED_BLUE, HIGH);

    vTaskDelay(500);
    digitalWrite(LED_BLUE, LOW);
  }
}

void toggleRedLed(void *arg)
{
  pinMode(LED_RED, OUTPUT);
  
  while (1)
  {
    vTaskDelay(1000);
    digitalWrite(LED_RED, HIGH);

    vTaskDelay(1000);
    digitalWrite(LED_RED, LOW);
  }
}

void setup()
{
  HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);
  portBASE_TYPE s1, s2, s3;
  s1 = xTaskCreate(&toggleGreenLed, "toggleGreenLed", 1024 , NULL, tskIDLE_PRIORITY + 1, NULL);
  s2 = xTaskCreate(&toggleBlueLed, "toggleBlueLed", 1024 , NULL, tskIDLE_PRIORITY + 2, NULL);
  s3 = xTaskCreate(&toggleRedLed, "toggleRedLed", 1024 , NULL, tskIDLE_PRIORITY + 3, NULL);
  if (s1 != pdPASS || s2 != pdPASS || s3 != pdPASS)
  {
    while (1)
      ;
  }

  vTaskStartScheduler();
  while (1)
  ;
}

void loop()
{
  // Not used.
}