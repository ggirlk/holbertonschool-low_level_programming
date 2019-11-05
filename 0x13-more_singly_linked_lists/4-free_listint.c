#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
listint_t *h;
while (head != NULL)
{
h = head;
head = head->next;
free(h);
}
}
