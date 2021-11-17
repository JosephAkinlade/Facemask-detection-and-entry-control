#include "Arduino.h"
#include "ultrasonic.h"

#define ECHO_PIN  8
#define TRIGGER_PIN 9

void Ultrasonic_Init(void)
{
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
}

uint32_t Ultrasonic_GetDistance(void)
{
  /*
   * Gets distance in centimeters
   * Parameters:
   * None
   * 
   * Return:
   * 1.) distance (unsigned 32-bit integer)
  */
  digitalWrite(TRIGGER_PIN,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN,LOW);
  uint32_t pulseWidth = pulseIn(ECHO_PIN, HIGH);
  
  return pulseWidth / 29 / 2;
}
