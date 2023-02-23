#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times.
 *
 */

void more_numbers(void)
{
	int n, times;

	for (times = 0; times <= 10; times++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
