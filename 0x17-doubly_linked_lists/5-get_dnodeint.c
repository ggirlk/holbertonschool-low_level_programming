#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: head node
 * @n: number
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
