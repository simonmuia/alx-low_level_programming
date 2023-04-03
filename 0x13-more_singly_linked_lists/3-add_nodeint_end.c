#include "lists.h"

/**
 * add_nodeint_end - add node at end of a list
 * @head: head of a list
 * @n: number of nodes
 * Return: address to new element or NULL if a fail.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	/* Allocate new node to a size */
	new = malloc(sizeof(listint_t));

	/* Return NULL if node is empty */
	if (new == NULL)
		return (NULL);

	/* Assign new element a number */
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
