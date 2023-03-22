#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter of each element
 * @array: pointer to array
 * @size: type of size
 * @action: pointer to function to be used
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && action)
for (i = 0; i < size; i++)
action(array[i]);

}
