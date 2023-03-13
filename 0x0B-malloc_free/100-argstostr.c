#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments in the program
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to concatenated string (NULL on failure)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	len += ac;

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos++] = av[i][j];
			j++;
		}
		if (str[k] == '\0')
			str[pos++] = '\n'; /* Add newline after each argument */
	}
	return (str);
}
