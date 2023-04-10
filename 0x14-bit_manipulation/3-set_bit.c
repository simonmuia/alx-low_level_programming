#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer to unsigned input string
 * @index: index to set
 * Return: 1 else -1;
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