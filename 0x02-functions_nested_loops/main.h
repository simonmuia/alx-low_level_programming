#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - custom library.
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

void print_putchar(void)
{
	puts("_putchar");
}

/**
 * print_alphabet - prints lowercase alphabets
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int instances;
	char c;

	for (instances =0; instances <= 10; instances++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}

/**
 * _islower - checks if input is lowercase.
 * @c : input variable.
 * Return: 1 if true and 0 if otherwise.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

}

/**
 * _isalpha - checks for alphabetic character
 * @c: input variable.
 * Return: 1 if true and 0 if otherwise.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

/**
 * print_sign - prints sign of a number
 * @n: input variable.
 * Return: 1 if n>0, 0 if n=0 and -1 if n<0 .
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('0');
		return(-1);
	}
}

/**
 * _abs - compute absolute value of integer
 *@num: input variable
 * Return: 0 Always
 */

int _abs(int num)
{
	putchar(abs(num));
	return (0);
}

/**
 * print_last_digit - returns last digit of provided number
 * @last_digit - input variable
 * Return: Always 0.
 */

int print_last_digit(int last_digit)
{
	putchar(last_digit % 10);
	return (0);
}

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
			putchar('0');
			putchar(hours);
			putchar (':');
		}
		else
		{
			putchar(hours);
			putchar(':');

			for (minutes = 0; minutes <= 59; minutes++)
			{
				if (minutes < 10)
				{
					putchar('0');
					putchar(minutes);
					putchar('\n');
				}
				else
				{
					putchar(minutes);
					putchar('\n');
				}
			}
		}
	}
}


/**
 * times_table - print the 9 times table starting from 0.
 * 
 * Return: Always 0
 */

void times_table(void)
{
	int number, times;

	for (times = 0; times <= 9; times++)
	{
		for (number = 0; number <= 9; number++)
		{
			int result;
			result = number * times;
			putchar(' ');
			putchar(result);
			if(number != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
