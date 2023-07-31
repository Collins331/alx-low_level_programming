#include"lists.h"
/**
  *free_listint2 - frees the listint_t
  *@head: a pointer to a of linked list
  */
void free_listint2(listint_t **head)
{
	listint_t *bin;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;

		while ((bin = current) != NULL)
		{
			bin = current->next;
			free(current);
			current = bin;
		}
		*head = NULL;
	}
}
