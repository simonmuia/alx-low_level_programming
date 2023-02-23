#include "main.h"

/**
 * print_square - prints square followed by new line.
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
	       _putchar('\n');	
	for (height = 0; height < size; height++)
	{
		for (width = 0; height < (size); width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
