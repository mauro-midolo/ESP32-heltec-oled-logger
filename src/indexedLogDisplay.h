#ifndef IndexedLogDisplay_h
#define IndexedLogDisplay_h

#include <Heltec.h>
#include <String>

class IndexedLogDisplay
{
private:
    static const int NUM_LINES = 6;
    static const int LINE_HEIGHT = 10;

    String messages[NUM_LINES];
    bool initialized;

public:
    IndexedLogDisplay();

    void begin();

    void clean();

    void add(int index, const String &logText);
    void add(const String &logText);

private:
    void drawLog();
};

#endif