#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if the var provided is a digit
 * @c: variable provided
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (isdigit(c))
		{
			_putchar(c);
			_putchar(":");
			_putchar(" ");
			return (1);
		}
		else
		{
			_putchar(c);
			_putchar(":");
			_putchar(" ");
			return (0);
		}
	}
}
