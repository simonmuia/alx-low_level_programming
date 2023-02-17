#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	int fnum, snum;

	while (fnum <= 99)
	{
		snum = 0;
		while (snum <= 99)
		{
			if (fnum < snum)
			{
				putchar((fnum / 10) + '0');
				putchar((fnum % 10) + '0');
				putchar(' ');
				putchar((snum / 10) + '0');
				putchar((snum % 10) + '0');
				if (fnum != 98 || snum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			snum++;
		}
		fnum++;
	}
	putchar('\n');
	return (0);
}
