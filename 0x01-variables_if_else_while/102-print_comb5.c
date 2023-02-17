#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int fnum, snum;

	for (fnum = 0; fnum < 9; fnum++)
	{
		for (snum = fnum + 1; snum <= 9; snum++)
		{
			if (fnum != 8 || snum != 9)
			{
				putchar(fnum + '0');
				putchar(snum + '0');
				putchar(' ');
				putchar(fnum + '0');
				putchar(snum + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
