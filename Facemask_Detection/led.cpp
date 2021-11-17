#include "Arduino.h"
#include "led.h"


void LED_Init(uint8_t pin)
{
  //Initialize all the LED pins
  pinMode(pin, OUTPUT);
}

void LED_On(uint8_t pin)
{
  digitalWrite(pin, HIGH);
}

void LED_Off(uint8_t pin)
{
  digitalWrite(pin, LOW);
}
