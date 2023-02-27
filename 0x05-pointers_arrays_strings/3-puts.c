#include "main.h"

/**
 * _puts - prints string followed by new line to stdout
 *
 */

void _puts(char *str);
{
	int letter;

	for (letter = 0; letter <= *str; *str++)
		_putchar(*str);
	_putchar('\n');
}
