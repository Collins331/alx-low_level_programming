#include "lists.h"

/**
 *free_listp2 - function that frees a listint_t list
 * @head:This will be head of list.
 * Return: 0 if successs.
 */


void free_listp2(listp_t **head)
{
	listp_t *num10;
	listp_t *tor;

	if (head != NULL)
	{
		tor = *head;
		while ((num10 = tor) != NULL)
		{
			tor = tor->next;
			free(num10);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of list.
 * Return: size if sucess.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t mode = 0;
	listp_t *hptr, *new, *add;
	listint_t *tor;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (mode);
			}
		}

		tor = *h;
		*h = (*h)->next;
		free(tor);
		mode++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (mode);
}
