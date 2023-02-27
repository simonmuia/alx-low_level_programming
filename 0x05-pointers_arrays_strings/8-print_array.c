#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: variable a
 * @n: number of elements of array to be printed
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
		printf("\n");
	}
}
