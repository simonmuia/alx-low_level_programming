#include "main.h"

/**
 * _pow_recursion - returns value of x raise to power of y.
 * @x: initial number
 * @y: power of x.
 * Return: -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
