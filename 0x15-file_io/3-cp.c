#include "main.h"
#include <stdio.h>

/**
 * error_handler - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 *
 * Return: no return.
 */
void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error_handler;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);

	do
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_handler(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_handler(0, -1, argv);
	} while (nchars == 1024);

	close_error_handler = close(file_from);
	if (close_error_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error_handler = close(file_to);
	if (close_error_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
