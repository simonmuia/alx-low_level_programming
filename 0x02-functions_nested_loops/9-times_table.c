#include "main.h"
/**
 * times_table - print the 9 times table starting from 0.
 *
 * Return: Always 0
 */

void times_table(void)
{
	int number, times;

	for (times = 0; times <= 9; times++)
	{
		for (number = 0; number <= 9; number++)
		{
			int result = times * number;
			
			if (number < 10)
			{
				_putchar(',');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (number == 9)
				_putchar('\n');
		}
	number = 0;
	}
}
