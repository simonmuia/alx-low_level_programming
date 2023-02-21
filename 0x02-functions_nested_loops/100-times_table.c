#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number of multiples
 */

void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				int results = a * b;

				_putchar(44);
				_putchar(32);
				if (results <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(results + '0');
				}
				else if (results <= 99)
				{
					_putchar(32);
					_putchar((results / 10) + '0');
					_putchar((results % 10) + '0');
				}
				else
				{
					_putchar(((results / 100) % 10) + '0');
					_putchar(((results / 10) % 10) + '0');
					_putchar((results % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
