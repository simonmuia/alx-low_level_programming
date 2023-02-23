#include "main.h"

/**
 * print_square - prints square followed by new line.
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int height, width;

	for (height = 0; height < size; height++)
	{
		if (size <= 0)
			_putchar('\n');
		for (width = 0; height < (size); width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
