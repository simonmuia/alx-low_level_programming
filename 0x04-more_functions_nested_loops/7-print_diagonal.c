#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal.
 * @n: number of times \ prints.
 *
 */

void print_diagonal(int n)
{
	int line_count = 0, space_count = 0;

	for (line_count = 0; line_count < n; line_count++)
	{
		if (n == 0)
		{
			_putchar("\n");
		}
		for (space_count = 0; space_count < line_count; space_count++)
		{
			_putchar(" ");
		}
		_putchar("\\");
		_putchar("\n");
	}
}
