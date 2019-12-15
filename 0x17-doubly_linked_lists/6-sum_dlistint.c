#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n).
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
}
