#include <Arduino.h>
#include <ElegantOTA.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>
#include "LittleFS.h"
#include "WebHelper.h"



// Set LED GPIO
const int ledPin = 25;
// Stores LED state

String ledState;



void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);
  
  // Set GPIO 2 as an OUTPUT
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  initLittleFS();
  
  serverHelper();
  
}

void loop() {
  ElegantOTA.loop();
}