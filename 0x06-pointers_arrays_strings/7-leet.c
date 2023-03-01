#include "main.h"

/**
 * *leet - encodes string into 1337
 * @str: string to be passed.
 * Return: 0 always.
 */

char *leet(char *str)
{
	int index1, index2;

	/** Define two strings of encodes to loop through */
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (index1 = 0; *(str + index1); index1++)
	{
		for (index2 = 0; index2 <= 9; index2++)
		{
			if (a[index2] == str[index1])
				str[index1] = b[index2];
		}
	}
	return (str);
}
