#include"lists.h"
/**
  *list_len - determines the number of elements in a linked list_t
  *@h: the linked list
  *Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
