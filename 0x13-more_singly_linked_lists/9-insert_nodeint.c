#include"lists.h"
/**
  *insert_nodeint_at_index - inserts a node at a given position
  *@head: the pointer to the list
  *@idx: the index point where to insert the node
  *@n: the data to be inserted int node
  *Return: the address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev;
	unsigned int pos;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = (*head);
		*head = new;

		return (new);
	}
	prev = (*head);

	for (pos = 0; pos < idx - 1; pos++)
	{
		if (prev == NULL)
		{
			free(prev);
			return (NULL);
		}
		prev = prev->next;
	}
	new->next = prev->next;
	prev->next = new;

	return (new);
}
