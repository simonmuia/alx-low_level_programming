#include "main.h"

/**
 * *_strcpy - copies string data
 * @dest: pointer to org string
 * @src: original string data.
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}
