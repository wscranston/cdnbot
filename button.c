#include <wiringPi.h>

void waitForButtonPush(unsigned buttonPin)
{
  while (digitalRead(buttonPin) == LOW)
    ;
}
