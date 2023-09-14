#include "lists.h"
/**
 * print_dlistint - prints all elements of linked list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *newnode;
	size_t count = 0;

	if (h == NULL)
		return (count);
	newnode = malloc(sizeof(dlistint_t));
	newnode->n = h->n;
	newnode->prev = h->prev;
	newnode->next = h->next;

	while (newnode != NULL)
	{
		printf("%d\n", newnode->n);
		count++;
		newnode = newnode->next;
	}
	return (count);
}
