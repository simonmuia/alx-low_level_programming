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
	int i = 0, str_len;

	if (b == NULL)
		return (0);

	/* find string length */
	for (str_len = 0; b[str_len] != '\0'; str_len++)
		;
	/*convert input to unsigned int*/
	while (i < b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			convNum += 1 << (str_len - i - 1);
		i++;
	}

	return (convNum);
}
