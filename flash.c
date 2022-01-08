#include <FastLED.h>
#define NUM_LEDS 100
#define DATA_PIN 13
//init led array
CRGB leds[NUM_LEDS];
// init num
int num = 0;

// init FASTLED
void setup() { 
  FastLED.addLeds<WS2811,DATA_PIN,RGB>(leds, NUM_LEDS);
}

// loop LED
void loop() {
  leds[num++] = CHSV(num*255/NUM_LEDS, 255, 255);
  delay(100);
  FastLED.show();
}
