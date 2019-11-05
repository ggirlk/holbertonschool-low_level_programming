#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning.
 * @h: list
 * Return: number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h = NULL;
if (head == NULL)
return (NULL);
h = malloc(sizeof(listint_t));
if (h == NULL)
{
free(h);
return (NULL);
}
h->n = n;
h->next = *head;
*head = h;
return (h);
}
