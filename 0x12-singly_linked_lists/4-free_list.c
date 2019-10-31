#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
list_t *h;
while (head != NULL)
{
h = head;
head = head->next;
free(h->str);
free(h);
}
}
