#include "project.h"

UT_TEST(30_flag_space)
{
	UT_PRINTF_ASSERT("% d\n", -42);
	UT_PRINTF_ASSERT("% d\n", 42);
	UT_PRINTF_ASSERT("% u\n", 42);
	UT_PRINTF_ASSERT("% i\n", -42);
	UT_PRINTF_ASSERT("% i\n", 42);
	UT_PRINTF_ASSERT("% x\n", 42);
	UT_PRINTF_ASSERT("% X\n", 42);
	UT_PRINTF_ASSERT("% o\n", 42);
	UT_PRINTF_ASSERT("% p\n", &strlen);
}
