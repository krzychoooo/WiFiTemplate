#include <Arduino.h>
#include <ElegantOTA.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include "LittleFS.h"
#include "WebHelper.h"
#include "pcb.h"



String ledState;



void setup() {
  pinSetting();
  
  Serial.begin(115200);
  
  initLittleFS();
  
  serverHelper();
  
}

void loop() {
  ElegantOTA.loop();
}