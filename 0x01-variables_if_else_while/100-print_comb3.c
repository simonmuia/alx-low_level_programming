#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int snum, dnum;

	for (snum = 0; snum < 9; snum++)
	{
		for (dnum = snum + 1; dnum <= 9; dnum++)
		{
			putchar(snum + '0');
			putchar(dnum + '0');
			if (snum != 8 || dnum != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
