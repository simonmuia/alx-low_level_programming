#include <stdio.h>
/**
 * main -prints size of input
 * types
 * Return: 0 is successful
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long-int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
