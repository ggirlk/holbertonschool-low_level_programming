#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: string.
 */
char **strtow(char *str)
{
int i, j = 0, l = 0, k = 0;
char **arr;
if (*str == '\0' || str == NULL)
return (NULL);

l = _strlen(str);

arr = malloc(sizeof(char) * l);

if (arr == NULL)
return (NULL);

for (i = 0; i < l; i++)
{
k = 0;
while (str[i] != ' ')
{
arr[j][k] = str[i];
k++;
}
if (arr[j] != NULL)
j++;
i += k;
}
return (arr);
}
/**
 * _strlen - length of a string without spaces.
 * @s: string
 * Return: string length.
 */
int _strlen(char *s)
{
int i = 0, l = 0;
if (*s == '\0')
{
return (0);
}
while (s[i] != '\0')
{
if (s[i] != ' ')
l++;

i++;
}

return (l);
}
