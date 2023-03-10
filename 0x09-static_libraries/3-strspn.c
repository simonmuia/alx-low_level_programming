#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to string to search in
 * @accept: pointer to string containing characters to search for
 * Return: returns number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			return (len);
		len++;
	}
	return (len);
}
