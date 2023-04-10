#include "main.h"
/**
 * create_file - creates file
 * @filename: filename string
 * @text_content: content of a file
 * Return: -1 if filename is NULL
*/

int create_file(const char *filename, char *text_content)
{
	int _file, num_lets, file_write;

	if (!filename)
		return (-1);
	_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (_file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_lets = 0; text_content[num_lets]; num_lets++)
		;
	file_write = write(filename, text_content, num_lets);

	if (file_write == -1)
		return (-1);

	close(_file);
	return (1);
}
