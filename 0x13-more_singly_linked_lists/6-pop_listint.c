#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - free list
 * @head: list
 *
 * Return: int.
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *h;

if (!(head && *head))
return (0);

i = (*head)->n;

h = *head;
*head = h->next;
free(h);

return (i);
}
