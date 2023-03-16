#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: string provided
 * @size: size of memory allocated
 * Return: NULL if nmemb/size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* return NULL if nmemb / size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*allocate memory to size of nmemb*/
	ptr = malloc(size * nmemb);
	/*if malloc fails return null*/
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
