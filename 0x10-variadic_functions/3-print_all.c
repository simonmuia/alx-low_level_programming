#include "variadic_functions.h"

/**
 * print_all - prints anything provided
 * @format: list of types of arguments passed to function
 * Return: void
*/

void print_all(const char * const format, ...)
{
/*define variadic arguments and list of printables*/
va_list valist;
unsigned int i = 0, j, c = 0;
char *str;
const char arr[] = "cifs";

/*iterate through arguments*/
va_start(valist, format);
while (format && format[i])
{
j = 0;
while (arr[j])
{
if (format[i] == arr[j] & c)
{
printf(", ");
break;
}
j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(valist, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(valist, double)), c = 1;
break;
case 's':
str = va_arg(valist, char *), c = 1;
/*check if string is null print (nil)*/
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
i++;
}
/*print new line and free valist*/
printf("\n"), va_end(valist);
}