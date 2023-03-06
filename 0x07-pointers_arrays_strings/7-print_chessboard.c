#include "main.h"

/**
 * print_chessboard - prints a 2D char array as a formatted chessboard
 * @a: pointer to a 2D character array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, m = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
		i++;
	}
	_putchar('\n');
}
