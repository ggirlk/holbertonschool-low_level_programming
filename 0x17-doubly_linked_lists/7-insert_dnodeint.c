#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: position
 * @n: data
 *
 * Return: pointer to list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0, k = 0;
dlistint_t *nh = *h;
if (idx < i || !(*h))
return (NULL);
*h = NULL;
while (nh != NULL)
{
if (i == idx)
{
add_dnodeint_end(&(*h), n);
k = 1;
}
add_dnodeint_end(&(*h), nh->n);
nh = nh->next;
i++;
}
if (k == 0)
return (NULL);
return (*h);
}
