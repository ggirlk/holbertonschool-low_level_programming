#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: list
 *
 * Return: int.
 */
int sum_listint(listint_t *head)
{
int i = 0;
if (!head)
return (0);

while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}
