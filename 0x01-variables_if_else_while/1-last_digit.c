#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 successful always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand(n%10) - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);

}
