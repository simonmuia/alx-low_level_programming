#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
