#include <stdio.h>

/**
 * main - print prime factors
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int factor, prinum = 612852475143;

	for (factor = 3; factor < 782849; factor = factor + 2)
	{
		while (prinum % factor == 0 && prinum != factor)
			prinum = prinum / factor;
	}
	printf("%lu\n", prinum);
	return (0);
}

