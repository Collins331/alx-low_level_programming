#include "lists.h"

/**
 * free_listp - function that prints a listint_t linked lis.
 * @head: head.
 * Return: NULL
 */
void free_listp(listp_t **head)
{
	listp_t *tim;
	listp_t *core;

	if (head != NULL)
	{
		core = *head;
		while ((tim = core) != NULL)
		{
			core = core->next;
			free(tim);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints list.
 * @head: head of list
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t moon = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (moon);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		moon++;
	}

	free_listp(&hptr);
	return (moon);
}
