#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * insert_dnodeint_at_index - .
 * @head: head node
 *
 * Return: list.
 */
int sum_dlistint(dlistint_t *head)
{
int s = 0;

while (head != NULL)
{

s += head->n;
head = head->next;
}
return (s);
=======
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
if (idx < i)
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
>>>>>>> bb8fda5e88f90beaf5345932afbd0850113e058d
}
