#include <Arduino.h>
#include "pcb.h"

void pinSetting(){
    pinMode(PIN_LED, OUTPUT);
    digitalWrite(PIN_LED, LOW);
}