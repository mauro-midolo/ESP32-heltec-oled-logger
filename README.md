# ESP32 Heltec OLED Logger

[![PlatformIO Registry](https://badges.registry.platformio.org/packages/mauro-midolo/library/ESP32%20Heltec%20OLED%20Logger.svg)](https://registry.platformio.org/libraries/mauro-midolo/ESP32%20Heltec%20OLED%20Logger)

[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?project=mauro-midolo_ESP32-heltec-oled-logger&metric=sqale_rating)](https://sonarcloud.io/summary/new_code?id=mauro-midolo_ESP32-heltec-oled-logger) [![Security Rating](https://sonarcloud.io/api/project_badges/measure?project=mauro-midolo_ESP32-heltec-oled-logger&metric=security_rating)](https://sonarcloud.io/summary/new_code?id=mauro-midolo_ESP32-heltec-oled-logger) [![Bugs](https://sonarcloud.io/api/project_badges/measure?project=mauro-midolo_ESP32-heltec-oled-logger&metric=bugs)](https://sonarcloud.io/summary/new_code?id=mauro-midolo_ESP32-heltec-oled-logger) [![Vulnerabilities](https://sonarcloud.io/api/project_badges/measure?project=mauro-midolo_ESP32-heltec-oled-logger&metric=vulnerabilities)](https://sonarcloud.io/summary/new_code?id=mauro-midolo_ESP32-heltec-oled-logger)

Enhance your ESP32 projects with the ESP32 Heltec OLED Logger, a powerful logging utility designed for the Heltec ESP32 platform. This application simplifies the process of logging messages and displaying them in real-time on the integrated OLED screen. Whether you're developing IoT applications, debugging your code, or monitoring sensor data, the ESP32 Heltec OLED Logger provides a user-friendly interface for efficient logging.

## Key Features

- **Real-time Logging:** Display log messages instantly on the Heltec ESP32 OLED screen.
- **Timestamped Entries:** Each log entry is timestamped for precise tracking of events.
- **Customizable Interface:** Easily adapt logging settings to fit your project requirements.
- **Efficient and Modular:** The codebase is designed for simplicity, modularity, and easy integration into your ESP32 projects.


## Example Usage

```cpp
#include <Arduino.h>
#include <IndexedLogDisplay.h>

IndexedLogDisplay indexedLogDisplay;

int counter = 0;

void setup() {
  indexedLogDisplay.begin();
}

void loop() {
  indexedLogDisplay.add("Log Entry " + String(counter++));
  delay(500);
}
```
## Support the project with a donation
This project is open source and free, but if you want to support us and help us continue to maintain and improve it, you can make a donation through PayPal. 
Any contribution, no matter how small, is greatly appreciated and will help us keep the project active and healthy. Thank you for your support!

[![Donate](https://img.shields.io/static/v1?label=PayPal&message=Buy%20Me%20a%20Coffee&color=green&logo=PayPal)](https://paypal.me/mauromi?country.x=IT&locale.x=it_IT)