#include "main.h"

/**
 * reverse_array - reverses content of array of ints
 * @a: var of int
 * @n: array length
 */

void reverse_array(int *a, int n)
{
	int index, tempvar;

	for (index = 0; (index < (n - 1) / 2); index++)
	{
		tempvar = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = tempvar;
	}
}
