#include <Arduino.h>
#include <IndexedLogDisplay.h>

IndexedLogDisplay indexedLogDisplay;

int i = 0;
void setup()
{
  indexedLogDisplay.begin();
}

void loop()
{
  indexedLogDisplay.add("Line " + String(i++));
  delay(500);
}
