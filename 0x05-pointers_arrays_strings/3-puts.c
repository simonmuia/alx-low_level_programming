#include "main.h"

/**
 * _puts - prints string followed by new line to stdout
 *
 */

void _puts(char *str)
{
	int letter;

	for (letter = 0; str[letter] != '\0'; letter++)
	{
		_putchar(str[letter]);
	}
	_putchar('\n');
}
