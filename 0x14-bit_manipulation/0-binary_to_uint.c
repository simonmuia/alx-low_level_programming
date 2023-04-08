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
	int i = 0;

	while (i < strlen(b))
	{
		
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		convNum += 1 << (strlen(b) - i - 1);
		i++;
	}

	if (b == NULL)
		return (0);

	return (convNum);
}