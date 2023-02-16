#include <stdio.h>
/**
 * main -prints size of input
 * types
 * Return: 0 is successful
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(int));
	printf("Size of a long long-int: %llu byte(s)\n", sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
