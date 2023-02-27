#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: always 0
 */

int main(void)
{
	char pass[90];
	int index, sum = 0, ranum;

	srand(time(0));
	for ( index = 0; index < 90; index++)
	{
		pass[index] = rand() % 78;
		sum += (pass[index] + '0');
		putchar(pass[index] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			ranum = 2772 - sum - '0';
			sum += ranum;
			putchar(ranum + '0');
			break;
		}
	}
	return (0);
}
