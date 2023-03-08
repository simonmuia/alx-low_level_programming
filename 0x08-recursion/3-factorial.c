#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: number provided
 * Return: 0 or 1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
