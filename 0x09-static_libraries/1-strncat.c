#include "main.h"

/**
 * *_strncat - concatenates two given strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i1, i2;

	for (i1 = 0; dest[i1] != '\0'; ++i1)
	{
		continue;
	}
	for (i2 = 0; src[i2] != '\0' && i2 < n; ++i2)
	{
		dest[i1 + i2] = src[i2];
	}
	dest[i1 + i2] = '\0';
	return (dest);
}
