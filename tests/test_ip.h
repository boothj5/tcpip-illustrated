void test_ip_valid(void **state);
void test_ip_invalid_null(void **state);
void test_ip_invalid_empty(void **state);
void test_ip_invalid_whitespace(void **state);
void test_ip_invalid_too_many_quads(void **state);
void test_ip_invalid_too_few_quads(void **state);
void test_ip_invalid_contains_chars(void **state);
void test_ip_invalid_leading_zero(void **state);
void test_ip_invalid_too_many_digits_quad(void **state);
void test_ip_invalid_quad_out_of_range(void **state);

void test_to_bin_returns_minus_one_when_invalid(void **state);
