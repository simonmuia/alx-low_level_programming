#include "main.h"

/**
 * set_bit - sets value of bit to 1 at index
 * @n: input number
 * @index: index given
 * Return: 1 otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n = (*n | num);
	return (1);
}
