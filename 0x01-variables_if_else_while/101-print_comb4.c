#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int fnum, snum, tnum;

	for (fnum = 0; fnum < 9; fnum++)
	{
		for (snum = fnum + 1; snum <= 9; snum++)
		{
			for (tnum = snum + 1; tnum <= 9; tnum++)
			{
				putchar(fnum + '0');
				putchar(snum + '0');
				putchar(tnum + '0');
				if (fnum != 7 && snum != 8 && tnum != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
