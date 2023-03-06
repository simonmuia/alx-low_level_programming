#include "main.h"

/**
 * *_strpbrk - searches a strin for any set of bytes
 * @s: string to be searched.
 * @accept: pointer containing string to be searched
 * Return: returns pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
