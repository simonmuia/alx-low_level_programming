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
	int source_file, dest_file, close_err_handler;
	ssize_t num_c, file_write;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file= open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	num_c = 1024;
	error_handler(source_file, dest_file, argv);

	while (num_c == 1024)
	{
		num_c = read(source_file, buf, 1024);
		if (num_c == -1)
			error_handler(-1, 0, argv);
		file_write = write(dest_file, buf, num_c);
		if (file_write == -1)
			error_handler(0, -1, argv);
	}

	close_err_handler = close(source_file);
	if (close_err_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close _file %d\n", source_file);
		exit(100);
	}

	close_err_handler = close(dest_file);
	if (close_err_handler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close _file %d\n", source_file);
		exit(100);
	}
	return (0);
}
