#include "main.h"
#include <sdtdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer to be allocated to memory.
 * Return: 0 if success otherwise 98 if terminated.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
