#include <CoreX.h>
#include "Connection.h"

const char* AUTH_TOKEN = "..........";
const char* DEVICE_ID = "..........";

const char ssid[] = "..........";
const char pass[] = "..........";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  corex.begin(net);

  setupCorex();
}

void loop() {
  if (!corex.connected()) {
    setupCorex();
  }
}