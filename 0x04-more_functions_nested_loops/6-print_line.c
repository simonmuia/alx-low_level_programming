#include "main.h"

/**
 * print_line - draws a straight line in terminal.
 * @n: variable input for number of times character _ should be printed.
 *
 */

void print_line(int n)
{
	int count = 1;

	while (count <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
