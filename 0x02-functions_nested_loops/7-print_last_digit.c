#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - returns last digit of provided number
 * @num: input variable
 * Return: Always 0.
 */

int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld < 0 ? -1 * ld : ld);
}
