#include "main.h"

/**
 * *cap_string - capitalizes letter of a string
 * @str: given string pointer
 * Return: returns string.
 */

char *cap_string(char *str)
{
	int i = 0;
	int next_cap = 1;

	/**loop through each char of a string */
	while (str[i] != '\0')
	{
		/** Checks if the next character should be capitalized */
		if (next_cap && (str[i] >= 'a' && str[i] <= 'z'))
		{
			/** convert to uppercase */
			str[i] -= 32;
		}
		/** reset flag */
		next_cap = 0;
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '{' || str[i] == '}')
			/** set flag for next character to be capitalized */
			next_cap = 1;
		i++;
	}
	return (str);
}
