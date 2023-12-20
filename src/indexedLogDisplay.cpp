#include "IndexedLogDisplay.h"

#include <Heltec.h>

IndexedLogDisplay::IndexedLogDisplay() : initialized(false) {}

void IndexedLogDisplay::begin()
{
    Heltec.begin(true, false, true);
    initialized = true;
}

void IndexedLogDisplay::clean()
{
    for (int i = 0; i < NUM_LINES; i++)
    {
        messages[i] = String();
    }
    drawLog();
}

void IndexedLogDisplay::add(int index, const String &logText)
{
    if (!initialized)
    {
        Serial.println("Error: Call begin() before using the IndexedLogDisplay class.");
        return;
    }

    if (index < 0 || index > NUM_LINES - 1)
    {
        Serial.println("Error: Insertion index must be between 1 and " + String(NUM_LINES));
        return;
    }

    messages[index] = logText;
    drawLog();
}

void IndexedLogDisplay::add(const String &logText)
{
  if (!initialized)
  {
    Serial.println("Error: Call begin() before using the IndexedLogDisplay class.");
    return;
  }

  // Verifica se ci sono posizioni disponibili
  int availableIndex = -1;
  for (int i = 0; i < NUM_LINES; ++i)
  {
    if (messages[i].isEmpty())
    {
      availableIndex = i;
      break;
    }
  }

  if (availableIndex == -1)
  {
    for (int i = 0; i < NUM_LINES - 1; ++i)
    {
      messages[i] = messages[i + 1];
    }
    availableIndex = NUM_LINES - 1;
  }


  messages[availableIndex] = logText;


  drawLog();
}

void IndexedLogDisplay::drawLog()
{
    Heltec.display->clear();

    int startY = 0;

    for (int i = 0; i < NUM_LINES; i++)
    {
        Heltec.display->drawString(0, startY + i * LINE_HEIGHT, messages[i]);
    }

    Heltec.display->display();
}