#include "arduino_alarm_clock.h"

#define BUZZER_PIN 11
#define BUZZ_DURATION 500
#define BUZZER_FREQUENCY 1000

unsigned long buzzerLastUpdate = 0;
bool buzzerOn = false;

void buzzer_setup() {
    pinMode(BUZZER_PIN, OUTPUT);
}

void buzzer_buzz() {
    if (state != ALARM_ENABLED) return;  // nur piepen wenn Alarm aktiv

    while(!((digitalRead(INCREMENT_BUTTON))||(digitalRead(MODUS_BUTTON)))){
      tone(BUZZER_PIN, BUZZER_FREQUENCY);
      delay(BUZZ_DURATION);
      noTone(BUZZER_PIN);
      delay(BUZZ_DURATION);
    }

}