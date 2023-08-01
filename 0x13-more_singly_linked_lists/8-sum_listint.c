#include"lists.h"
/**
  *sum_listint - sums up all the data on the nodes
  *@head: the pointer to the list
  *Return: the total sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
