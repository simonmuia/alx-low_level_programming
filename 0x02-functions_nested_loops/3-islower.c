#include "main.h"
/**
 * _islower - checks if input is lowercase.
 * @c : input variable.
 * Return: 1 if true and 0 if otherwise.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

}
