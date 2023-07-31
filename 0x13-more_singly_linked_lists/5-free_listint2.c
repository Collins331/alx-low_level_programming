#include"lists.h"
/**
  *free_listint2 - frees the listint_t
  *@head: a pointer to a pointer of linked list
  *Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;

		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = NULL;
	}
}
