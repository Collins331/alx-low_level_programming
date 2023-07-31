#include"lists.h"
/**
  *listint_len - prints the length of the list
  *@h: the single linked list
  *Return: the the length of the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
