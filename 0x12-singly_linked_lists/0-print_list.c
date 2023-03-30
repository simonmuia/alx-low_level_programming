#include "lists.h"

/**
 * print_list - check the code
 * @h: pointer
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t i;
if (h != NULL)
{
for (i = 0; h != NULL; i++)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
printf("[0] (nil)\n");
h = h->next;
}
}
return (i);
}
