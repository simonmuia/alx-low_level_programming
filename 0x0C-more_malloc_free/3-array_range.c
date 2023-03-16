#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 * returns NULL if Min > Max, and if malloc fails
 */

int *array_range(int min, int max)
{
	char *array;
	int i, els, num;

	/*return NULL if min>max*/
	if (min > max)
		return (NULL);
	/*load total elements*/
	els = max - min + 1;
	/*Allocate memory for array*/
	array = malloc(sizeof(int) * els);
	/*return NULL if malloc fails*/
	if (array == NULL)
		return (NULL);
	/*assign num to min number*/
	num = min;
	/*add elements to array*/
	for (i = 0; i < els; i++)
	{
		array[i] = num;
		num++;
	}
	return (array);
}
