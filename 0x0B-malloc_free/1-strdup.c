#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a new allocated space in memory
 * @str: provided string
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *n;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	n = malloc(sizeof(char) * (len + 1));

	if (n = NULL)
		return (NULL);
	for ( i = 0; i < len; i++)
		n[i] = str[i];
	n[len] = '\0';
	return (n);
}
