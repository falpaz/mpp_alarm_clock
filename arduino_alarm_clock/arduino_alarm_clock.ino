#include "arduino_alarm_clock.h"


void setup() {
  clock_setup();

}

void loop() {
  clock_get_time();
  delay(1000);
}
