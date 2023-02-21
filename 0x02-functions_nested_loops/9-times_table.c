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
			int result;
			result = number * times;
			_putchar(' ');
			_putchar(result);
			if(number != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
