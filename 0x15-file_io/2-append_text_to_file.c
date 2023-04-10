#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: file name
 * @text_content: file contents
 * Return: -1 if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _file, num_lets = 0, file_write;

	if (!filename)
		return (-1);

	_file = open(filename, O_WRONLY | O_APPEND);

	if (_file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[num_lets])
		{
			num_lets++;
		}

		file_write = write(_file, text_content, num_lets);
		if (file_write == -1)
			return (-1);
	}
	close(_file);

	return (1);
}
