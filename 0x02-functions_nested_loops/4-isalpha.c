#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: input variable.
 * Return: 1 if true and 0 if otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
