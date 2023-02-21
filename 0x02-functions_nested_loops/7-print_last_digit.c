#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - returns last digit of provided number
 * @num: input variable
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (0);
}
