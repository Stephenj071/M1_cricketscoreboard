/**
 * @file crickettest.c
 * @author Stephen J
 * @brief 
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"unity.h"
#include"cricket.h"



void test_bat1(void);

void setUp(){}
void tearDown(){}
void test_bat1(void){
    TEST_ASSERT_EQUAL(1,1);
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_bat1);
    return UNITY_END();
}

