#include <stdio.h>

/**
 * main - print prime factors
 *
 * Return: always 0
 */

int main(void)
{
	long long prinum = 612852475143;
	int factor = 2;

	while (factor * factor <= prinum)
	{
		if (prinum % factor == 0)
		{
			prinum /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%d\n", prinum);
	return (0);
}
