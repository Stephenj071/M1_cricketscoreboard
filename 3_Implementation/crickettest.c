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



void test_run(void);

void setUp(){}
void tearDown(){}

int ans()
{
    UNITY_BEGIN();
    RUN_TEST(test_run);
    return UNITY_END();
}

void test_run(void){
    TEST_ASSERT_EQUAL(4,4);
}