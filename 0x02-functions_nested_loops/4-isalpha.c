#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks if char is alpha.
 * @c: Our input variable.
 *
 * Return: 1 if true and 0 if false.
 */

int _isalpha(int c)
{
	if (c = true)
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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
