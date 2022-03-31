#include"unity.h"
#include"cricket.h"



void test_run(void);

void setUp(){}
void tearDown(){}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_run);
    return UNITY_END();
}

void test_run(void){
    TEST_ASSERT_EQUAL(4,4);
}