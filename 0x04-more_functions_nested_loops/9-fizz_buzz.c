#include <stdio.h>

/**
 * main - print nums conditionally
 *
 * Return: Always 0.
 */

int main(void)
{
	int count = 100, num;

	for (num = 1; num <= count; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", num);
		}
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
