#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list
 *
 * Return: list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *h;
h = malloc(sizeof(listint_t));
if (!head || !h)
return (NULL);

while (head != NULL)
{
if (i == idx)
{
h->n = n;
h->next = *head;
*head = h;
}
*head = (*head)->next;
i++;
}
return (*head);
}
