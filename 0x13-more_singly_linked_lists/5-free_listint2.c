#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
listint_t *h = *head, *nxt;
while (h != NULL)
{
nxt = h->next;
free(h);
h = nxt;
}
}
