#include"lists.h"
/**
  *free_list - frees a list_t list
  *@head: the pointer to list
  *Return: nothing
  */
void free_list(list_t *head)
{
	list_t *bin = head;

	while ((bin = head) != NULL)
	{
		head = head->next;
		free(bin->str);
		free(bin);
	}
}
