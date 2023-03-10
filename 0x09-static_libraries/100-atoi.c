#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: always 0
 */

int _atoi(char *s)
{
	int count = 0, mint = 1, isint = 0;
	unsigned int numint = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			mint *= -1;
		}
		while (s[count] >= 48 && s[count] <= 57)
		{
			isint = 1;
			numint = (numint * 10) + (s[count] - '0');
			count++;
		}
		if (isint == 1)
			break;
		count++;
	}
	numint *= mint;
	return (numint);
}
