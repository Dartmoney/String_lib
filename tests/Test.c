#include "../library.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "unity.h"

void setUp(void) {
    // Можно оставить пустым
}

void tearDown(void) {
    // Можно оставить пустым
}

//
// Created by islam on 14.03.2025.
//
void test_creat(void) {
    string st;
    TEST_ASSERT_EQUAL(1, creat(st, 10).kod);
    TEST_ASSERT_EQUAL(-1, creat(st, 0).kod);
    TEST_ASSERT_EQUAL(-1, creat(st, -5).kod);
}

void test_str_ex(void)
{
    string st;
    st = creat(st,10);
    st.st = "qwertyuiop";
    TEST_ASSERT_EQUAL(1, string_ex(st,2,4).kod);
    TEST_ASSERT_EQUAL(-1, string_ex(st,4,2).kod);
    TEST_ASSERT_EQUAL(-1, string_ex(st,-4,4).kod);
    TEST_ASSERT_EQUAL(-1, string_ex(st,1,-3).kod);
    TEST_ASSERT_EQUAL(-1, string_ex(st,100,150).kod);
    free(st.st);
    TEST_ASSERT_EQUAL(-2, string_ex(st,-4,4).kod);
}

void test_find(void)
{
    string st;
    st = creat(st,10);
    string whatfind;
    whatfind = creat(whatfind,3);
    int reg = 1;
    whatfind.st = "ert";
    st.st = "qwertyuiop";;
    TEST_ASSERT_EQUAL(2, find(st,whatfind,reg));
    TEST_ASSERT_EQUAL(-3, find(whatfind,st,reg));
    free(st.st);
    free(whatfind.st);
//    TEST_ASSERT_EQUAL(-2, find(st,whatfind,reg));
}


int test_all(void) {
    UNITY_BEGIN();
    RUN_TEST(test_creat);
    RUN_TEST(test_find);
    RUN_TEST(test_str_ex);
    return UNITY_END();
}