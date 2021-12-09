#include "uop_msb.h"
using namespace uop_msb;

BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
  int rows = 5;
   int columns = 3;

   for (int i = 1; i <= rows; ++i) {
      for (int j = 1; j <= columns; ++j) {
         cout << "*  ";
      }
      cout << endl;
   }
    leds = 7;

    while (true) {

    }
}

