

#include <LiquidCrystal.h>
#include "arduino_alarm_clock.h"

const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define LCD_COLUMNS 16
#define LCD_ROWS 2

void lcd_setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(LCD_COLUMNS, LCD_ROWS);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void lcd_show_time() {
  lcd.clear();
  lcd.print(RTC.hours);
  lcd.print(":");
  lcd.print(RTC.minutes);
  lcd.print(":");
  lcd.print(RTC.seconds);
  if (state == DISPLAY_TIME){
  lcd.print("");}
  if (state == CHANGE_HOURS){
  lcd.print("hours");}  
  if (state == CHANGE_MINUTES){
  lcd.print("minutes");}
    if (state == CHANGE_SECONDS){
  lcd.print("seconds");}
}

