#include "main.h"

/**
 * print_binary - prints binary rep of a number
 * @n: number to print
*/


void print_binary(unsigned long int n)
{
	unsigned long int temp;

	temp = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (temp > 0)
	{
		if (n & temp)
			_putchar("1");
		else
			_putchar("0");
		temp >>= 1;
	}
}
