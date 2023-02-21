#include "main.h"
/**
 * jack_bauer - print every minute of day starting 00:00 to 23:59.
 * Return: 0 always
 */

void jack_bauer(void)
{
	int hrs = 0, mins = 0;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			_putchar(hrs < 9 ? 0 + '0' : hrs / 10 + '0');
			_putchar(hrs < 9 ? hrs + '0' : hrs % 10 + '0');
			_putchar(':');
			_putchar(mins < 9 ? 0 + '0' : mins / 10 + '0');
			_putchar(mins < 9 ? mins + '0' : mins % 10 + '0');
			_putchar('\n');

			mins++;
		}
		mins = 0;
		hrs++;
	}
}
