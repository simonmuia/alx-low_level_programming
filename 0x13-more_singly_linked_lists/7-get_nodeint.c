#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: head of a node
 * @index: index of a node
 * Return: NULL is node doesnt exist.
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
