#include "Arduino.h"
#include "ultrasonic.h"
#include "led.h"

int main(void)
{
  Serial.begin(9600);
  Ultrasonic_Init();

  while(1)
  {
    Serial.println(Ultrasonic_GetDistance());
    
  }
  
}
