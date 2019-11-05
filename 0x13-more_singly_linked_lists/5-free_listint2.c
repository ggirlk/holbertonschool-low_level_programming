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
if (head && *head)
{
free_listint2(&(*head)->next);
free(*head);
*head = NULL;
}
}
