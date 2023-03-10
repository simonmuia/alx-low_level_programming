#include "main.h"

/**
 * print_triangle - prints triangle of given count
 * @size: size of triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int space, count, hash;

	if (size <= 0)
		_putchar('\n');
	for (count = 1; count <= size; count++)
	{
		for (space = size - count; space >= 1; space--)
			_putchar(' ');
		for (hash = 1; hash <= count; hash++)
			_putchar('#');
		_putchar('\n');
	}
}
