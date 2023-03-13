#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars and initiali with specific char
 * @size: size of array
 * @c: name of character provided
 * Return: 0 if size is zero otherwise pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
