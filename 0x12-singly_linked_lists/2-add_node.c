#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: list
 * @str: string
 * Return: node.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *h = NULL;
char *s;
if (head == NULL)
return (NULL);
h = malloc(sizeof(list_t));
if (h == NULL)
return (NULL);
s = strdup(str);
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
size_t _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
