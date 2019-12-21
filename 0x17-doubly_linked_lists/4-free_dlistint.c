#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free list.
 * @head: head node
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
if (head)
{
free_dlistint(head->next);
free(head);
}
}
