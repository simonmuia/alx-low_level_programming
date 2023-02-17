#include <stdio.h>

/**
 * main - entry point
 * Return:0 (successful)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if(num % 10 != 0)
		{
			putchar(num % 10);
			printnumber(num -(num % 10) / 10);
		}
	}
	putchar("\n");
	return (0);
}
