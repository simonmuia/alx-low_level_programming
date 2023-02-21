#include "main.h"
#include <stdio.h>

/**
 * main - entry point to print fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int count;
	long int num1 = 1, num2 = 2, fib;

	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 48; count++)
	{
		fib = num1 + num2;
		printf(", %ld", fib);
		num1 = num2;
		num2 = fib;
	}
	putchar('\n');
	return (0);
}
