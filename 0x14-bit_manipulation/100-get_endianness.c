#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 or 1
*/

int get_endianness(void)
{
	unsigned int i;
	char *chr;

	i = 1;
	chr = (char *) &i;

	return ((int)*chr);
}
