#include "main.h"

/**
 * flip_bits - returns numer of bits needed to flip numbers
 * @n: pointer to unsigned int n
 * @m: pointer to unsigned int m
 * Return: number of allocated bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num;

	for (bit_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit_num++;
	}
	return (bit_num);
}
