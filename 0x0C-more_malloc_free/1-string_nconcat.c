#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two given strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be allocated
 * Return: NULL when it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, str1_len = 0, str2_len = 0;
	char *ptr;

	/*find length of two strings*/
	for (i = 0; s1[i] != '\0'; i++)
		str1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		str2_len++;

	/* use s2 if n is greater than or equal to s2*/
	if (n >= str2_len)
	{
		ptr = malloc(sizeof(char) * (str1_len + str2_len + 1));
	}

	/* Assign memory to concatenated strings */
	ptr = malloc(sizeof(char) * (str1_len + n + 1));
	str2_len = n;

	/* Return null if string is null*/
	if (ptr == NULL)
		return (NULL);
	/* Iterate through s1 and concatenate to s2*/
	for (i = 0; i < str1_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < str1_len + str2_len; i++)
	{
		ptr[i] = s2[i + str1_len];
	}
	ptr[i] = '\0';
	return (ptr);
}
