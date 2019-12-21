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
while (head != NULL)
{
h = head;
head = h->next;
h->prev = NULL;
free(h);
}
}
