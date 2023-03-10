#include <stdio.h>
#include "main.h"

/**
 * main - print number of args passed.
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: 0 when successful.
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
