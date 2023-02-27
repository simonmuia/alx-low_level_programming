#include "main.h"

/**
 * rev_string - reverss a string
 * @s: string input
 */

void rev_string(char *s)
{
	/** @count: array length */
	int i, count = 0;
	char revchar = s[0]; /** reversed character  */

	while ( s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		revchar = s[i];
		s[i] = s[count];
		s[count] = revchar;
	}
}


		
