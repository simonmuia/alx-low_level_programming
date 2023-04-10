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
	char *buff;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	txtread = read(file, buff, letters);
	txtwrite = write(STDOUT_FILENO, buff, txtread);
	close(file);
	free(file);
	return (txtwrite);
}
