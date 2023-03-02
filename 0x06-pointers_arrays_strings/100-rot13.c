#include "main.h"

/**
 * rot13 - Encodes a string using the rot13 algorithm
 * @s: Pointer to string to be encoded
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		(*(s + i) >= 'a' && *(s + i) <= 'z') ?
			(*(s + i) = (*(s + i) - 'a' + 13) % 26 + 'a') :
			((*(s + i) >= 'A' && *(s + i) <= 'Z') ?
			 (*(s + i) = (*(s + i) - 'A' + 13) % 26 + 'A') :
			 (*(s + i)));
		i++;
	}

	return (s);
}
