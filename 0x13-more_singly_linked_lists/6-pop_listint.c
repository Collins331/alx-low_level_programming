#include"lists.h"
/**
  *pop_listint - frees the head node
  *@head: pointer to the node
  *Return: the data of the node
  */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;

	ptr = *head;

	*head = (*head)->next;

	free(ptr);

	return (i);
}
