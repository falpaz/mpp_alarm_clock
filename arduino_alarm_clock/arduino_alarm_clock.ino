#include "arduino_alarm_clock.h"


void setup() {
  clock_setup();
  lcd_setup();

}

void loop() {
  clock_get_time();
  lcd_show_time();
}
