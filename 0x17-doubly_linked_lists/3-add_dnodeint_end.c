#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end.
 * @head: head node
 * @n: number
 * Return: list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nh, *l;
nh = malloc(sizeof(dlistint_t));
l = malloc(sizeof(dlistint_t));
if (nh == NULL || l == NULL)
{
free(l);
free(nh);
return (NULL);
}
l = *head;
nh->n = n;
nh->next = NULL;
if ((*head) == NULL)
{
nh->prev = NULL;
(*head) = nh;
return (nh);
}
while (l->next != NULL)
l = l->next;

l->next = nh;
l->prev = (*head);

return (nh);
}
