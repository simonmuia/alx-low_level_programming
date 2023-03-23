#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all it's parameters
 * @n: number of arguments
 * Return: 0 if n== 0
*/

int sum_them_all(const unsigned int n, ...)
{
/*Define variable list*/
va_list valist;
unsigned int k;
int sum = 0;
/*Return 0 if n is 0*/
if (n == 0)
return (0);
/*Start iterating arguments in va_list*/
va_start(valist, n);
/*Find sum of all arguments*/
for (k = 0; k < n; k++)
sum += va_arg(valist, int);
/*Free va_list*/
va_end(valist);
/*Return sum*/
return (sum);
}
