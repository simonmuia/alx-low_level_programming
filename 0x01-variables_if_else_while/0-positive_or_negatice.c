#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 -  (Successful always)
 */

int main(void)
{	/* Define random n */
	int n;

	n = rand(n);
	/* check if the number is >0, < 0 or is zero */
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative \n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	/* Return 0 if successful */
	return (0);

}
