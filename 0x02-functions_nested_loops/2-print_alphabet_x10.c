#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int instances;
	char c;

	for (instances = 0; instances <= 10; instances++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
