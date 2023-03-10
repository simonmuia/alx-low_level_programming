#include "main.h"

/**
 * _isdigit - checks if the var provided is a digit
 * @c: variable provided
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
