#include "unity.h"
#include "IndexedLogDisplay.h"

// Creazione di un oggetto IndexedLogDisplay per il test
IndexedLogDisplay logDisplay;

void setUp(void)
{
    // Chiamato prima di ogni test
    logDisplay.begin();
    logDisplay.clean();
}

void tearDown(void)
{
    // Chiamato dopo ogni test
    logDisplay.clean();
}

void test_AddLogAtIndex(void)
{
    const int index = 2;
    const String logText = "Test log message";

    logDisplay.add(index, logText);

    // Verifica se il messaggio è stato aggiunto correttamente alla posizione desiderata
    //TEST_ASSERT_EQUAL_STRING(logText.c_str(), logDisplay.messages[index].c_str());
}

void test_AddLogWithoutIndex(void)
{
    const String logText = "Test log message";

    logDisplay.add(logText);

    // Verifica se il messaggio è stato aggiunto correttamente a una posizione disponibile
    // bool addedSuccessfully = false;
    // for (int i = 0; i < NUM_LINES; ++i)
    // {
    //     if (logDisplay.messages[i] == logText)
    //     {
    //         addedSuccessfully = true;
    //         break;
    //     }
    // }clear

    // TEST_ASSERT_TRUE(addedSuccessfully);
}


// Esempio di test per la funzione clean (test molto basico)
void test_Clean(void)
{
    // Chiamare la funzione clean e verificare che non causi errori
    logDisplay.clean();
}

// Esegui tutti i test
void runAllTests(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_AddLogAtIndex);
    RUN_TEST(test_AddLogWithoutIndex);
    RUN_TEST(test_Clean);

    UNITY_END();
}

// Punto di ingresso per PlatformIO
void setup()
{
    runAllTests();
}

void loop()
{
    // Non fare nulla qui
}