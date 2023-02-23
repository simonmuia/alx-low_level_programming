#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks is character is uppercase
 * @c: character variable
 * Return: 1 if c is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (isupper(c))
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
