#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * void free_list - frees a list
 * @head: list
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
free(head);
}
