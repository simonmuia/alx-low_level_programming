#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - returns last digit of provided number
 * @last_digit: input variable
 * Return: Always 0.
 */

int print_last_digit(int last_digit)
{
	int ab_digit = abs(last_digit);
	last_digit = ab_digit % 10;
	_putchar(last_digit);
	return(last_digit);
	
}
