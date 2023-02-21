#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints sequence of numbers from n to 98
 * @n: variable
 */

void print_to_98(int n)
{
	int number;

	if (n >= 98)
	{
		while (number >= 98)
		{
			printf("%d", number);
			if (n != 98)
				printf(", ");
			number--;
		}
	}
	else
	{
		while (number <= 98)
		{
			printf("%d", number);
			if (number != 98)
				printf(", ");
			number++;
		}
	}
	putchar('\n');
