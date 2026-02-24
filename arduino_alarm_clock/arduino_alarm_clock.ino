#include "arduino_alarm_clock.h"

#define REFRESH_TIME_MILLIS 1000

uint32_t lastUpdate = 0;


void setup() {
  clock_setup();
  lcd_setup();
  buttons_setup();
  buzzer_setup();
}

void loop() {
  
  if (millis() - lastUpdate >= REFRESH_TIME_MILLIS) {
    lastUpdate = millis();
    lcd_show_time();
    clock_get_time();
  }
  buttons_handle_presses();
  alarm_compare_time();
}
