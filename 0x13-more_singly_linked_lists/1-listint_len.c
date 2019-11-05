#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: list
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
if (h == NULL)
return (0);

if (h->next != NULL)
return (listint_len(h->next) + 1);

return (1);
}
