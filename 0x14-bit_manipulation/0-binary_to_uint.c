#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string input
 * Return: converted number or 0
 * if there is one or more chars in str b
 * thats not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	/* Initialize results and iterator*/
	unsigned int convNum = 0;
	int str_len, i;

	if (b == NULL)
		return (0);

	/* find string length */
	for (str_len = 0; b[str_len] != '\0'; str_len++)
		;

	/*convert input to unsigned int*/
	for (str_len--, i = 1; str_len >= 0; str_len--, i *= 2)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
		{
			return (0);
		}

		if (b[str_len] & 1)
		{
			convNum += i;
		}
	}

	return (convNum);
}
