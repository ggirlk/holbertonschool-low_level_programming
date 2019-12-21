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
dlistint_t *h;
while (head)
{
h = head;
head = h->next;
free(h);
}
}
