#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success otherwise 1.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/*check for only one argument provided*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*get number of coins for each cent value*/
	coins = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
