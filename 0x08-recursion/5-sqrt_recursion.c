#include "main.h"

/**
 * squareroot - returns actual squareroot of a given number
 * @n: given number
 * @i: iterator.
 */

int squareroot(int n, int i);

/**
 * _sqrt_recursion - returns squareroot of a given number
 * @n: given integer
 * Return: -1 if n lacks natural sqareroot.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}

int squareroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot (n, i + 1));
}
