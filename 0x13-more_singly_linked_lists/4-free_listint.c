#include"lists.h"
/**
  *free_listint - free the listint
  *@head: the pointer to list
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *bin;

	while (head != NULL)
	{
		bin = head;
		head = head->next;
		/*free(bin->n);*/
		free(bin);
	}
}
