#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realocates memory block using malloc and free
 * @ptr: pointer provided
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly memory block
 * Return: NULL if new size and ptr is 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i, num;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	else 
		new = new_size;
	for (i = 0; i < n; i++)
		nptr[i] = ((char *)ptr)[i];
	free (ptr);
	ptr = nptr;
	return (ptr);
}
