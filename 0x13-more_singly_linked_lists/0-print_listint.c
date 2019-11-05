#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: list
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
if (h == NULL)
return (0);

printf("%d\n", h->n);

if (h->next != NULL)
return (print_listint(h->next) + 1);

return (1);
}
