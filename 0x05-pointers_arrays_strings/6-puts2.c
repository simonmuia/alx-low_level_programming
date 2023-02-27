#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: variable
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != 0 '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
