#include "main.h"

/**
 * error_handler - handles error on file opening
 * @dest_file: destination file
 * @source_file: source file
 * @argv: arguments array
 * Return: void
 */

void error_handler(int file_from, int file_to, char *argv[])
{

	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
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
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY), error_handler(file_from, -1, argv);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664), error_handler(-1, file_to, argv);

	while ((num_c = read(file_from, buf, 1024)))
		num_c == -1 ? error_handler(-1, 0, argv) : write(file_to, buf, num_c) == -1 ? error_handler(0, -1, argv)
																					: (void)0;

	close_err_handler = close(file_from), close_err_handler == -1 ? dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100) : (void)0;
	close_err_handler = close(file_to), close_err_handler == -1 ? dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100) : (void)0;

	return (0);
}
