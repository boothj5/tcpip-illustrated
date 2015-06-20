#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>
#include <string.h>

#include "src/ip.h"

void test_ip_valid(void **state)
{
    assert_true(ip_valid("192.168.0.1"));
}

void test_ip_invalid_null(void **state)
{
    assert_false(ip_valid(NULL));
}

void test_ip_invalid_empty(void **state)
{
    assert_false(ip_valid(""));
}

void test_ip_invalid_whitespace(void **state)
{
    assert_false(ip_valid("   "));
}

void test_ip_invalid_too_many_quads(void **state)
{
    assert_false(ip_valid("192.168.0.1.10"));
}

void test_ip_invalid_too_few_quads(void **state)
{
    assert_false(ip_valid("192.168.0"));
}

void test_ip_invalid_contains_chars(void **state)
{
    assert_false(ip_valid("1JJ.16h.0.1"));
}

void test_ip_invalid_leading_zero(void **state)
{
    assert_false(ip_valid("01.16.0.1"));
}

void test_ip_invalid_too_many_digits_quad(void **state)
{
    assert_false(ip_valid("1021.16.0.1"));
}

void test_ip_invalid_quad_out_of_range(void **state)
{
    assert_false(ip_valid("123.16.256.1"));
}
