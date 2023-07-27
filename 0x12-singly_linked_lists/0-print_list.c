#include"lists.h"
/**
  *print_list - prints all the elements of a list_t
  *@h: the head if the list
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		count++;

		h = h->next;

		if (h != NULL)
		{
			printf("\n");
		}
	}
	printf("\n");

	return (count);
}
