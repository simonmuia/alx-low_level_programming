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
void error_handler(int source_file, int dest_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
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
	int source_file, dest_file, close_error_handler;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(source_file, dest_file, argv);

	do
	{
		nchars = read(source_file, buf, 1024);
		if (nchars == -1)
			error_handler(-1, 0, argv);
		nwr = write(dest_file, buf, nchars);
		if (nwr == -1)
			error_handler(0, -1, argv);
	} while (nchars == 1024);

	close_error_handler = close(source_file);
	if (close_error_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	close_error_handler = close(dest_file);
	if (close_error_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	return (0);
}
