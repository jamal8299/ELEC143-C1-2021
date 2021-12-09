#include "uop_msb.h"
using namespace uop_msb;

// You are to use these ojects to read the switch inputs
DigitalIn sw1(BTN1_PIN);
DigitalIn sw2(BTN2_PIN);


// You are to use this object to control the LEDs
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
    while (true)
    {
   void push(int pin) {
  // wait until button was pushed down...
  while (digitalRead(pin) == LOW);
  // ... and released again
  while (digitalRead(pin) == HIGH);
}void push(int pin) {
  // wait until button was pushed down...
  while (digitalRead(pin) == LOW);
  // ... and released again
  while (digitalRead(pin) == HIGH);
}

    while(true);
}


