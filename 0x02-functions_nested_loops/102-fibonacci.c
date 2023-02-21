#include "main.h"
#include <stdio.h>

/**
 * main - entry point to print fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int fib;
	int num1 = 1, num2 = 2;
	int num_n = num1 + num2;

	for (fib = 3; fib <= 50; ++fib)
	{
		printf("%d, ", num_n);
		num1 = num2;
		num2 = num_n;
		num_n = num1 + num2;
	}
	return (0);
}
