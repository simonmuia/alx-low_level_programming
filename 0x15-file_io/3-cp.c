#include "main.h"

/**
 * error_handler - handles error on file opening
 * @dest_file: destination file
 * @source_file: source file
 * @argv: arguments array
 * Return: void
 */

void error_handler(int source_file, int dest_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n ", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n ", argv[2]);
		exit(99);
	}
}

/**
 * main - runs the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err_handler;
	ssize_t num_c, file_write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	while (num_c == 1024)
	{
		num_c = read(file_from, buf, 1024);
		if (num_c == -1)
			error_handler(-1, 0, argv);
		file_write = write(file_to, buf, num_c);
		if (file_write == -1)
			error_handler(0, -1, argv);
	}

	close_err_handler = close(file_from);
	if (close_err_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close _file %d\n", file_from);
		exit(100);
	}

	close_err_handler = close(file_to);
	if (close_err_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close _file %d\n", file_from);
		exit(100);
	}
	return (0);
}
