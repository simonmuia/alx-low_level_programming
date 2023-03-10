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
	int i,chr, sum;
	
	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (chr = 0; argv[i][chr] != '\0'; chr++)
		{
			if (argv[i][chr] < 47 || argv[i][chr] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum+=atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
