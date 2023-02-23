#include "main.h"

/**
 * print_triangle - prints triangle of given count
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int space, count, hash;

	for (count = 0; count < size; count++)
	{
		if (size == 0)
		{
			_putchar('\n');
		}
		for (space = (size-count); space >= 1; space--)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= count hash++)
			_putchar('#');
	}
	_putchar('\n');
}
