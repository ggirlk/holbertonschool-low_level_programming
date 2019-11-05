#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: list
 * @n: integer
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h = NULL, *h2 = NULL;
if (head == NULL)
return (NULL);
h = malloc(sizeof(listint_t));
if (h == NULL)
{
free(h);
return (NULL);
}
h->n = n;
h->next = NULL;
if (*head == NULL)
*head = h;
else
{
h2 = *head;
while (h2->next != NULL)
h2 = h2->next;

h2->next = h;
}
return (h);
}
