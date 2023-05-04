#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string input
 * Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convNum = 0, base = 1;
	int str_len = 0;

	if (!b)
		return (0);

	while (b[str_len] != '\0')
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
		str_len++;
	}

	str_len--;

	while (str_len >= 0)
	{
		if (b[str_len] == '1')
			convNum += base;
		base *= 2;
		str_len--;
	}

	return (convNum);
}