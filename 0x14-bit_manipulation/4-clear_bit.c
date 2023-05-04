#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to set
 * Return: 1 is success or -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	if (*n & num)
		*n ^= num;

	return (1);
}
