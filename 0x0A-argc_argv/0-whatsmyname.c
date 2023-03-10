#include "main.h"
#include <stdio.h>

/**
 * main - prints program name followed by new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 when successful.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
