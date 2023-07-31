#include"lists.h"
/**
  *add_nodeint_end - adds a node at the end of single-linked list
  *@head: the node to be added
  *@n: the int data of the node
  *Return: always an address of node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	listint_t *ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	}
	return (new_node);
}
