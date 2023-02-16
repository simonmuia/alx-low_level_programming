#include <stdio.h>
/**
 * main -prints size of input
 * Return: 0 is successful
 */
int main(void)
{
	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(int));
	printf("Size of a long long-int: %lu byte(s) \n", (unsigned long)sizeof(double));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(float));
	return (0);
}
