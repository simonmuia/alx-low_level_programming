#include "main.h"

/**
 * print_binary - prints binary of a number
 * @n: number input
 * Return: void;
 */

void print_binary(unsigned long int n)
{
	int counter = 0, shift = 0;
	unsigned long int temp_n = n;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (temp_n > 0)
	{
		temp_n >>= 1;
		counter++;
	}
	while (counter > 0)
	{
		shift = counter - 1;
		if ((n >> shift & 1))
			printf("1");
		else
			printf("0");
		counter--;
	}
}
