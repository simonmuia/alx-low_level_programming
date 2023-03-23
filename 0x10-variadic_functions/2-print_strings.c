#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings passed to functions
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
/*define type valist, and iterator*/
va_list valist;
unsigned int i;
char *str;

/*iterate through valist arguments*/
va_start(valist, n);

/*print strings*/
for (i = 0; i < n; i++)
{
/*assign string pointer to arguments*/
str = va_arg(valist, char *);
/*print nill if string is null*/
if (str)
printf("%s", str);
else
printf("(nil)");
/*print nothing is separator is null*/
if (i < n - 1)
if (separator)
printf("%s", separator);
}
/*print new line*/
printf("\n");
/* Free valist*/
va_end(valist);
}
