#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal.
 * @n: number of times \ prints.
 *
 */

void print_diagonal(int n)
{
	int count = 1;

	while (count <= n)
	{
		if (n <= 0)
		{
			_putchar("\n");
		}
		_putchar("\\");
		count++;
	}
	_putchar("\n");
}
