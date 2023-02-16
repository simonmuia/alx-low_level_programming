#include <stdio.h>
/**
 * main -prints size of input
 * Return: 0 is successful
 */
int main(void)
{
	printf("Size of a char: %c \n", sizeof(char));
	printf("Size of an int: %d \n", sizeof(int));
	printf("Size of a long int: %ld \n", sizeof(long int));
	printf("Size of a long long-int: %lld \n", sizeof(long long int));
	printf("Size of a float: %f \n", sizeof(float));
	return (0);
}
