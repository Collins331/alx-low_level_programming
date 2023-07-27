#include"lists.h"
/**
  *add_node - adds a new node at the beginning of a list
  *@head: the first element of the list
  *@str: the string to include
  *Return: address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
