#include "main.h"
/**
 * is_palindrome_recursive - recursively checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the current character being checked
 * @end: the ending index of the current character being checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* base case */
	if (start >= end)
		return (1);

	/* recursive case */
	if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome using recursion
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	/* determine length of string */
	while (s[len] != '\0')
		len++;

	/* call recursive function with start and end indices */
	return (is_palindrome_recursive(s, 0, len - 1));
}
