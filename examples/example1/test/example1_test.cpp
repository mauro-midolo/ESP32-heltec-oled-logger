#include "unity.h"



void setUp(void)
{

}

void tearDown(void)
{

}

void test_example(void)
{
    TEST_ASSERT_EQUAL_STRING("Hello", "Hello");
}

void runAllTests(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_example);

    UNITY_END();
}

int main(void) {
   runAllTests();
}

void setup()
{

    runAllTests();
}

void loop()
{

}
