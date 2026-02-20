#include "arduino_alarm_clock.h"

#define HOURS_PER_DAY 24
#define MINUTES_PER_HOURS 60

Time alarm_time = {0,0};

void alarm_increment_hours(){
  alarm_time.hours = (alarm_time.hours + 1) % HOURS_PER_DAY;
}

void alarm_increment_minutes(){
  alarm_time.minutes = (alarm_time.minutes + 1) % MINUTES_PER_HOURS;
}

void alarm_compare_time(){
  if ((RTC.hours == alarm_time.hours)&&(RTC.minutes == alarm_time.minutes)){
    buzzer_buzz();
  }
}