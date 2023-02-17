#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if(num != 9)
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
