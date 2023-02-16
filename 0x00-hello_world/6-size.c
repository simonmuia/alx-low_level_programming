#include <stdio.h>
/**
 * main -prints size of input
 * Return: 0 is successful
 */
int main(void)
{
	printf("Size of a char: %s byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", sizeof(int));
	printf("Size of a long long-int: %lld byte(s) \n", sizeof(int));
	printf("Size of a float: %ld byte(s) \n", sizeof(float));
	return (0);
}
