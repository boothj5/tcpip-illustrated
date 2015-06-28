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
        unit_test(test_ip_valid),
        unit_test(test_ip_invalid_null),
        unit_test(test_ip_invalid_empty),
        unit_test(test_ip_invalid_whitespace),
        unit_test(test_ip_invalid_too_many_quads),
        unit_test(test_ip_invalid_too_few_quads),
        unit_test(test_ip_invalid_contains_chars),
        unit_test(test_ip_invalid_leading_zero),
        unit_test(test_ip_invalid_too_many_digits_quad),
        unit_test(test_ip_invalid_quad_out_of_range),

        unit_test(test_to_bin_returns_minus_one_when_invalid),
    };

    return run_tests(all_tests);
}
