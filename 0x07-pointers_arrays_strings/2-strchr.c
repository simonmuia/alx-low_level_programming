#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string.
 * @c: character
 * Return: returns pointer to first occurence of char c.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
