#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Return:0 (successful)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int base_10 = log10(n);

		printf(base_10);
	}
	printf('\n');
	return (0);
}
