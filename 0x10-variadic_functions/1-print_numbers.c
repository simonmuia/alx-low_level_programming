#include "variadic_functions.h";

/**
 * print_numbers - prints its numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
/*Define type valist and iterator*/
va_list valist;
unsigned int i;

/* Initiate arguments iteration with va_list*/
va_start(valist, n);

/*iterate through arguments and print the numbers*/
for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, int));
if (separator && i < n - 1)
printf("%s", separator);
}
/*print new line*/
printf("\n");
/*free valist*/
va_end(valist);
}
