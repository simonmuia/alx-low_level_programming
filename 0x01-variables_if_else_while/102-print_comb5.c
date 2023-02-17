#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int fnum, snum;

	for (fnum = 0; fnum < 99; fnum++)
	{
		for (snum = fnum + 1; snum <= 99; snum++)
		{
			putchar(fnum / 10 + '0');
			putchar(fnum % 10 + '0');
			putchar(' ');
			putchar(fnum / 10 + '0');
			putchar(snum % 10 + '0');
			if (fnum != 98 || snum != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
