WiFiClient net;
CoreX corex;

void setupCorex() {
  Serial.println("CoreX IoT https://corex.id");
  Serial.println("Menghubungkan ke WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("\nTerhubung ke WiFi!");
  Serial.print("Menghubungkan ke server");
  while (!corex.connect()) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("\nTerhubung ke server!");
}