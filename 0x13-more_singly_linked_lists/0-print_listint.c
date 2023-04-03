#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to elements of a list
 * Return: null if elements are empty
*/

size_t print_listint(const listint_t *h)
{
	size_t elsize = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elsize++;
	}
	return (elsize);
}
