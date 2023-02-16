#includes <stdio.h>
/**
 * main -prints size of input
 * Return: 0 is successful
 */
int main(void)
{
	printf("Size of a char: %ld \n", sizeof(char));
	printf("Size of an int: %d \n", sizeof(int));
	printf("Size of a long int: %ld \n", sizeof(double));
	printf("Size of a long long-int: %ld \n", sizeof(float));
	printf("Size of a float: %ld", sizeof(float));
	return (0);
}
