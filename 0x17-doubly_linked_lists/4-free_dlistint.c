#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    if (head == NULL)
        return;
    while (head->prev != NULL)
        head = head->prev;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}