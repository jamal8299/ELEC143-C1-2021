#include "uop_msb.h"
using namespace uop_msb;

BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
LCD_16X2_DISPLAY display;

int main()
{
    leds = 0;
    display.cls();
    display.locate(0, 0);       //Row 0, column 0
    display.printf("Task 2");
    do {
  cout << "value of a: " << a << endl;
  a = a + 1;
}while( a < 50 );
return 0;
    leds = 7;

    while (true) {

    }
}

