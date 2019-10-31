#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
int i = 0;
char *s;
while (h != NULL)
{
if (h->str == NULL)
s = "(nil)";
else
s = h->str;
printf("[%d] %s\n", h->len, s);
h = h->next;
i++;
}
return (i);
}
