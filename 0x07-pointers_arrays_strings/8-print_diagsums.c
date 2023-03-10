#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the array containing the matrix elements
 * @size: size of the square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_main = 0, sum_secondary = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum_main += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum_secondary += *(a + i);
	}
	printf("%d, %d\n", sum_main, sum_secondary);
}
