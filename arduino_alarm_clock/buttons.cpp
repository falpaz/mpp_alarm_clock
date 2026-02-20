#include "arduino_alarm_clock.h"

#define INCREMENT_BUTTON 12
#define MODUS_BUTTON 13
#define COOLDOWN_TIME 300
void buttons_setup(){
  pinMode(INCREMENT_BUTTON, INPUT);
  pinMode(MODUS_BUTTON, INPUT);

}

void buttons_handle_presses(){
  if (digitalRead(MODUS_BUTTON)) {
    state = (State)((state + 1) % STATE_COUNT);
    Serial.println("Modus Button");
    delay(COOLDOWN_TIME);
  } 
  if (digitalRead(INCREMENT_BUTTON)){
    if (state == CHANGE_HOURS){
      clock_increment_hours();
    }
    if (state == CHANGE_MINUTES){
      clock_increment_minutes();
    }
    if (state == CHANGE_SECONDS){
      clock_increment_seconds();
    }
  }
}
