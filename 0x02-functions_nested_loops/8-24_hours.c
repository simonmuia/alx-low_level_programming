#include "main.h"
/**
 * jack_bauer - print every minute of day starting 00:00 to 23:59.
 * Return: 0 always
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		if (hours < 10)
		{
			_putchar('0');
			_putchar(hours);
			_putchar (':');
		}
		else
		{
			_putchar(hours);
			_putchar(':');

			for (minutes = 0; minutes <= 59; minutes++)
			{
				if (minutes < 10)
				{
					_putchar('0');
					_putchar(minutes);
					_putchar('\n');
				}
				else
				{
					_putchar(minutes);
					_putchar('\n');
				}
			}
		}
	}
}
