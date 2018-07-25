/*
 * Copyright © 2017 Embedded Artistry LLC.
 * License: MIT. See LICENSE file for details.
 */

#include <stdlib.h>
#include "stdlib_tests.h"

// Cmocka needs these
// clang-format off
#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <cmocka/cmocka.h>
// clang-format on

#pragma mark - Private Functions -

static void labs_test(void** state)
{
	assert_int_equal(imaxabs(0), 0);
	assert_int_equal(imaxabs(1), 1);
	assert_int_equal(imaxabs(-1), 1);
	assert_int_equal(imaxabs(LONG_MAX), LONG_MAX);
	assert_int_equal(imaxabs(-LONG_MAX), LONG_MAX);
	assert_int_equal(imaxabs(LONG_MIN), LONG_MIN);
	assert_int_equal(imaxabs(-LONG_MIN), LONG_MIN);
}

#pragma mark - Public Functions -

int labs_tests(void)
{
	const struct CMUnitTest labs_tests[] = {cmocka_unit_test(labs_test)};

	return cmocka_run_group_tests(labs_tests, NULL, NULL);
}
