#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer linked list
 * Return: size of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nels;

	nels = 0;
	while (h != NULL)
	{
		h = h->next;
		nels++;
	}
	return (nels);
}
