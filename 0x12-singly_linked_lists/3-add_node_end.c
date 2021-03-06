#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end.
 * @head: list
 * @str: string
 * Return: node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *h = NULL;
list_t *h2 = NULL;
char *s;
if (head == NULL)
return (NULL);
h = malloc(sizeof(list_t));
s = strdup(str);
if (h == NULL || !s)
{
free(h);
return (NULL);
}
h->len = _strlen(s);
h->str = s;
h->next = NULL;
if (*head == NULL)
*head = h;
else
{
h2 = *head;
while (h2->next != NULL)
h2 = h2->next;
h2->next = h;
}
return (h);
}
/**
 * _strlen - count sting length.
 * @s: string
 * Return: string length.
 */
size_t _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
