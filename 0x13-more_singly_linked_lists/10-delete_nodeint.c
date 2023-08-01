#include"lists.h"

/**
  *delete_nodeint_at_index -deletes the node at index position
  *@head: the pointer to the list
  *@index: the position of the node
  *Return: 1 (success) or -1(failed)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos;
	listint_t *prev, *del;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;

		free(del);
		return (1);
	}

	prev = *head;
	for (pos = 0; pos < index - 1; pos++)
	{
		if (prev == NULL)
		{
			return (-1);
		}
		prev = prev->next;
	}
	del = prev->next;
	if (del == NULL)
	{
		return (-1);
	}

	prev->next = del->next;
	free(del);

	return (1);
}
