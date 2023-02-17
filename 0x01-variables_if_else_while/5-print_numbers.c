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
		put(log10(n));
	}
	printf('\n');
	return (0);
}
