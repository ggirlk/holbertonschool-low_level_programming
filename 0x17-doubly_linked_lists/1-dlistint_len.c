#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 * @h: head node
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
dlistint_t *nh, *tmp;
nh = malloc(sizeof(dlistint_t));
tmp = malloc(sizeof(dlistint_t));
if ((nh == NULL && tmp == NULL) || h == NULL)
{
free(nh);
free(tmp);
return (0);
}
nh->n = h->n;
nh->next = h->next;
nh->prev = h->prev;
while (nh != NULL)
{
tmp = nh;
nh = tmp->next;
tmp->next = nh;
tmp->prev = tmp->prev;
i++;
}
return (i);
}
