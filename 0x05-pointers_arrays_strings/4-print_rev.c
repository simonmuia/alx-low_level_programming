#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string variable
 */

void print_rev(char *s)
{
	int count, len;

	for (len = 0; s[len] != '\0'; count++)
	{
		for (count = len - 1; count >= 0; count--)
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
