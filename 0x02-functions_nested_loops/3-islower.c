#include <stdio.h>
#include <ctype.h>

/**
 * _islower - pass condition to check int c
 *
 * @c: variable input
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c) == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
