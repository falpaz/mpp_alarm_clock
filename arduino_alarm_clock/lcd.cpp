

#include <LiquidCrystal.h>
#include "arduino_alarm_clock.h"

const uint8_t rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define LCD_COLUMNS 16
#define LCD_ROWS 2

void lcd_setup() {
  lcd.begin(LCD_COLUMNS, LCD_ROWS);
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
  lcd.print("  hours");}  
  if (state == CHANGE_MINUTES){
  lcd.print("  min");}
  if (state == ALARM_HOURS){
  lcd.print(" A hours");}
  if (state == ALARM_MINUTES){
  lcd.print(" A min");}
  if (state == ALARM_ENABLED){
  lcd.print(" Alarm on");}
  lcd.setCursor(0,1);
  lcd.print(alarm_time.hours);
  lcd.print(":");
  lcd.print(alarm_time.minutes);
  lcd.print(":0");
}

