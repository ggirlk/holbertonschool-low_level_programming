#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
listint_t *h;

while (head != NULL)
{
h = *head;
*head = (*head)->next;
free(h);
}
*head = NULL;
}
