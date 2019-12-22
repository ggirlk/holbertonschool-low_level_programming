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
/*if (idx < 1 || idx > size + 1)
return(NULL);*/
while (*h != NULL)
{
if (i == idx)
add_dnodeint_end(&(*h), n);

*h = (*h)->next;
i++;
}
return (*h);
}
/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: head node
 * @index: the index of the node
 * Return: list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
/**
 * add_dnodeint_end - adds a new node at the end.
 * @head: head node
 * @n: number
 * Return: list.
 
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nh, *l;
nh = malloc(sizeof(dlistint_t));
l = malloc(sizeof(dlistint_t));
if (nh == NULL || l == NULL || head == NULL)
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
l->prev = nh;

return (nh);
}
*/
