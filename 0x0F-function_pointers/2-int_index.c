#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: poiner to array
 * @size: number of element in array
 * @cmp: pointer to function to compare values
 * Return: -1 if no matches or if size is eq or less than 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1)
}
