#include <stdio.h>

/**
 * print_alphabet - prints alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
