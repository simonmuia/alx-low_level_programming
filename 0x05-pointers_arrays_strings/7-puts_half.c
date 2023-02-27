#include "main.h"

/**
 * puts_half - prints half of a string followed by new line.
 * @str: variable string
 */

void puts_half(char *str)
{
	int count, arrcount;
	
	while (str[count]!= '\0')
		count++;
	if (count + 1 % 2 != '0')
		arrcount = (count - 1) / 2;
	else
		arrcount = (count / 2);
	arrcount++;
	for (count = arrcount; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}
