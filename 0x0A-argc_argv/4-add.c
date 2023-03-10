#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of integers
 * @argv: array of integers
 * Return: 0 if successful otherwise 1.
 */

int main (int argc, char *argv[])
{
	int i, sum;
	
	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if(sizeof(atoi(argv[i])) != 4)
		{
			printf("Error\n");
			return (1);
		}
		sum+=atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
