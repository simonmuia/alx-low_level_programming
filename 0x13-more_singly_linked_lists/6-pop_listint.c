#include "lists.h"

/**
 * pop_listint - deletes head of node of
 * linked list
 * @head: head of list
 * Return: head node's data
*/

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;

	head_node = curr->n;
	free(curr);
	h = curr->next;

	*head = h;

	return (head_node);
}
