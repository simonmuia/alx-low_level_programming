#include "main.h"
#include <stdlib.h>
/**
 * _abs - compute absolute value of integer
 *@n: input variable
 * Return: 0 Always
 */

int _abs(int n)
{
	if (n < 0)
		_putchar(n + (n * 2));
	else
		_putchar(n);
	_putchar('\n');
	return (0);
}
