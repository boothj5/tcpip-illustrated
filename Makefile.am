bin_PROGRAMS = tcpip
tcpip_SOURCES = src/main.c

TESTS = tests/unittests
check_PROGRAMS = tests/unittests
tests_unittests_SOURCES = src/ip.c src/ip.h tests/test_ip.c tests/test_ip.h tests/unittests.c
tests_unittests_LDADD = -lcmocka
