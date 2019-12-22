#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *nh = *h;
/*nh = malloc(sizeof(dlistint_t));*/
*h = NULL;
while (nh != NULL)
{
if (i == idx)
add_dnodeint_end(&(*h), n);

add_dnodeint_end(&(*h), nh->n);
nh = nh->next;
i++;
}
return (*h);
}
