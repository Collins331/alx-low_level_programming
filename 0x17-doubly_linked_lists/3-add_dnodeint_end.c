#include "lists.h"
/**
 * add_dnodeint_end - inserts node at the end of linked list
 * @head: pointer to the linked list
 * @n: the value to insert
 * Return: the pointer to the inserted node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		dlistint_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->prev = tmp;
	}
	return (newnode);
}
