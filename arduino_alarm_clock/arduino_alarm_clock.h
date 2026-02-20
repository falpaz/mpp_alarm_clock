#pragma once
#include "virtuabotixRTC.h"


enum State {DISPLAY_TIME, CHANGE_HOURS, CHANGE_MINUTES, CHANGE_SECONDS, STATE_COUNT};
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