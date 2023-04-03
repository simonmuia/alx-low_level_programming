#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: head of a list.
 * Return: Address of a new element and NULL if fails
 * @n: number of nodes
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
