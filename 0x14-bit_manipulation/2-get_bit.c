#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: index to get
 * @n: unsigned long int input
 * Return: value of a bit or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 0;

	if (n == 0 && index < 64)
		return (0);

	while (num <= 63)
	{
		if (index == num)
		{
			return (n & 1);
		}
		n >>= 1;

		num++;
	}

	return (-1);

}
