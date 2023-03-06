#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string.
 * @c: character
 * Return: returns pointer to first occurence of char c.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (NULL);
}
