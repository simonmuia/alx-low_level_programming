#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: memory area
 * @b: contant byte
 * @n:  number of bytes of memory area.
 * Return: returns constant
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
