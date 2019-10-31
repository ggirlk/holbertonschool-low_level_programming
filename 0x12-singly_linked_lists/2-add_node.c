#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *h;
char *s = (char *)str;
h = malloc(sizeof(list_t));
if (h == NULL)
return (NULL);
h->len = _strlen(s);
h->str = s;
h->next = *head;
*head = h;
return (h);
}
/**
 * _strlen - count sting length.
 * @s: string
 * Return: string length.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
