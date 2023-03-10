#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints multiples of two given numbers
 * @argc: number of arguments.
 * @argv: array of numbers.
 * Return: 0 when success otherwise 1.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
