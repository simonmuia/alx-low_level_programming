#include "main.h"

/**
 * print_binary - prints binary rep of a number
 * @n: number to print
*/


void print_binary(unsigned long int n)
{
	unsigned long int temp_n = n;
	int num_bits = 0, shift = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (temp_n > 0)
	{
		temp_n >>= 1;
		num_bits++;
	}

	while (num_bits > 0)
	{
		shift = num_bits - 1;
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
		num_bits--;
	}
}
