#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head : pointer of head.
 * Return: NULL if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *one, *two;

if (head == NULL || head->next == NULL)
return (NULL);

one = head->next;
two = (head->next)->next;

while (two)
{
if (one == two)
{
one = head;

while (one != two)
{
one = one->next;
two = two->next;
}

return (one);
}

one = one->next;
two = (two->next)->next;
}

return (NULL);
}
