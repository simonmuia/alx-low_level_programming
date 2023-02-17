#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int fnum, snum;

	while (fnum <= 99)
	{
		snum = fnum + 1;
		while (snum <= 99)
		{
			putchar((fnum / 10) + '0');
			putchar((fnum % 10) + '0');
			putchar(' ');
			putchar((snum / 10) + '0');
			putchar((snum % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			snum++;
		}
		fnum++;
	}
	return (0);
}
