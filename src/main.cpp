#include <Arduino.h>
#include <ElegantOTA.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include "LittleFS.h"
#include "WebHelper.h"
#include "pcb.h"
#include <Preferences.h>
#include "Config.h"


String ledState;
Config conf;


void setup() {
  pinSetting();
  
  Serial.begin(115200);
  
  initLittleFS();
  
  conf.readConfig();
  conf.showConfig(Serial2);
  
  serverHelper();
  
}

void loop() {
  ElegantOTA.loop();
}