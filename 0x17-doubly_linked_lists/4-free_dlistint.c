#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free list.
 * @head: head node
 *
 * Return: list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *h;
if (head == NULL)
{
return;
}
while (head != NULL)
{
h = head->next;
if (h == NULL)
return;
head = h->next;
h->prev = NULL;
free(h);
}
}
