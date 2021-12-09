#include "uop_msb.h"
using namespace uop_msb;

DigitalIn BlueButton(USER_BUTTON);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
LCD_16X2_DISPLAY display;

int main()
{

  const int ledPin = 13;
int ledState = LOW;             // ledState used to set the LED
int flash = 5;

unsigned long previousMillis = 0;        // will store last time LED was updated

const long interval = 1000;           // interval at which to blink (milliseconds)


void setup() {
pinMode (ledPin, OUTPUT);
}

void loop() {
  
 
 
 for (int i=0; i<flash; i++){
  
    unsigned long currentMillis = millis();
    if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   


   // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
delay (5000);
}





    while (true) {

    }
}


