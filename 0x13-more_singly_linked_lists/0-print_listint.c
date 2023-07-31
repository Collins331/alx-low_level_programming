#include"lists.h"
/**
  *print_listint - prints all elements
  *@h: the single linked list
  *Return: an integer
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
