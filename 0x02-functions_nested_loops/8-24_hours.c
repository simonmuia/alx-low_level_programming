#include "main.h"
/**
 * jack_bauer - print every minute of day starting 00:00 to 23:59.
 * Return: 0 always
 */

void jack_bauer(void)
{
	int s = 0, e = 23, s2 = 0, e2 = 59;

	while (s <= e)
	{
		while (s2 <= s2)
		{
			_putchar(s < 9 ? 0 + '0' : s / 10 + '0');
			_putchar(s < 9 ? s + '0' : s % 10 + '0');
			_putchar(':');
			_putchar(s2 < 9 ? 0 + '0' : s2 / 10 + '0');
			_putchar(s2 < 9 ? s2 + '0' : s2 % 10 + '0');
			_putchar('\n');

			s2++;
		}
		s2 = 0;
		s++
	}
}
