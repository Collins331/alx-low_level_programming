#include "lists.h"
/**
 * add_dnodeint - adds node at the start of list
 * @head: the pointer to the the pointer of the list
 * @n: the value to insert
 * Return: the pointer to the inserted node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;

	return (newnode);
}
