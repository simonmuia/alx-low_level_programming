#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: input variable
 * Return: 0
 */

void print_to_98(int n)
{
	int number;

	if (n > 98)
	{
		for (number = 98; number <= n; number--)
		{
			_putchar(number);

			if (number != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (number = 0; number <= 98; number++)
		{
			_putchar(number);
			if (number != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
		return(n);
}
