#include "main.h"

/**
 * print_square - prints square followed by new line.
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int h, w;

	if (size <= 0)
	       _putchar('\n');	
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < (size); w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
