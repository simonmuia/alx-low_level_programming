#include "main.h"

/**
 * read_textfile - read text file and prints POSIX std output
 * @filename: pointer to filename
 * @letters: number of letters printed;
 * Return: number of letters. otherwise 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t txtread, txtwrite;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	txtread = read(file, buffer, letters);
	txtwrite = write(STDOUT_FILENO, buffer, txtread);
	close(file);
	free(file);
	return (txtwrite);
}
