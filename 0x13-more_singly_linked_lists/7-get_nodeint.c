#include"lists.h"
/**
  *get_nodeint_at_index - gives the nth node;
  *@head: points the head node
  *@index: the nth node;
  *Return: the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *ptr = malloc(sizeof(listint_t));

	ptr = head;
	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
