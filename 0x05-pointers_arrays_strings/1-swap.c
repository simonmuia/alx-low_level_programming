#include "main.h"

/**
 * swap_int - swaps value of two integers.
 * @a: first integer
 * @b: second integer.
 */

void swap_int(int *a, int *b)
{
	int temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}
