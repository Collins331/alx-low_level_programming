#include "lists.h"
/**
 * sum_dlistint - sums up all int data in the list
 * @head: pointer to the list
 * Return: the sum of all int n
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
