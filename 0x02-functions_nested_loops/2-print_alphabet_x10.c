#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times;
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int instances;
	char c;

	for (instances = 0; instances <= 10; instances++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
	return (0);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}