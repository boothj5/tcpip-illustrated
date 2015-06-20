#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdlib.h>
#include <string.h>

#include "src/ip.h"

void test_func(void **state)
{
    assert_true(somefunc());
}
