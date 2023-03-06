#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area.
 * @n: number of bytes to be copied
 * Return: destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	const char *ptr_src = (const char *)src;

	while (n--)
		*ptr_dest = *ptr_src++;

	return (dest);
}
