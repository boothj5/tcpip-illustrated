#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "tests/test_ip.h"

int main(int argc, char* argv[]) {
    const UnitTest all_tests[] = {
        unit_test(test_func)
    };

    return run_tests(all_tests);
}
