#include "main.h"

/**
 * read_textfile - read text file and prints POSIX std output
 * @filename: pointer to filename
 * @letters: number of letters printed;
 * Return: number of letters. otherwise 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ofile, file_read, file_write;
	char *buff;

	if (!filename)
		return (0);
	ofile = open(filename, O_RDONLY);

	if (ofile == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	file_read = read(ofile, buff, letters);
	file_write = write(STDOUT_FILENO, buff, file_read);

	free(buff);
	close(ofile);
	
	return (file_write);
}
