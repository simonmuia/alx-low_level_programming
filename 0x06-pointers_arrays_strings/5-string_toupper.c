#include "main.h"

/**
 * *string_toupper - changes lowecase letters of a string to uppercase
 * @str: wild card for characters provided
 * Return: 0 always.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index]  >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
