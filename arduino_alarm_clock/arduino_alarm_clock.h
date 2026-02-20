#pragma once
#include "virtuabotixRTC.h"


enum State {DISPLAY_TIME, CHANGE_HOURS, CHANGE_MINUTES, ALARM_HOURS, ALARM_MINUTES, ALARM_ENABLED, STATE_COUNT};
extern State state;



void clock_setup();
void clock_get_time();
void clock_increment_hours();
void clock_increment_seconds();
void clock_increment_minutes();
extern virtuabotixRTC RTC;

void lcd_setup();
void lcd_show_time();

void buttons_setup();
void buttons_handle_presses();
#define INCREMENT_BUTTON 12
#define MODUS_BUTTON 13

struct Time {
  int hours;
  int minutes;
};

extern Time alarm_time;
void alarm_increment_minutes();
void alarm_increment_hours();
void alarm_compare_time();

void buzzer_setup();
void buzzer_buzz();