#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning.
 * @head: head node
 * @n: number
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nh;
nh = malloc(sizeof(dlistint_t));
if (nh == NULL || head == NULL)
{
free(nh);
return (0);
}

nh->n = n;
nh->next = (*head);
nh->prev = NULL;
if ((*head) != NULL)
(*head)->prev = nh;
(*head) = nh;
return (*head);
}
