#include "main.h"

/**
 * _isupper - checks is character is uppercase.
 * @c: character variable.
 * Return: 1 if c is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
