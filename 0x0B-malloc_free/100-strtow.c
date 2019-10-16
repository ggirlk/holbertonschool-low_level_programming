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
int i, j = 0, l = 0, k = 0, m = 0;
char **arr;
if (*str == '\0' || str == NULL)
return (NULL);

l = _strlen_recursion(str);
arr = malloc(sizeof(char) * l);

for (i = 0; i < l; i++)
{
k = 0;
j = 0;
while (str[i] != ' ')
{
k = 1;
j++;
i++;
}
if (k == 1)
{
arr[m] = malloc(sizeof(char) * j);
m++;
}
}

m = 0;
for (i = 0; i < l; i++)
{
j = 0;
k = 0;
while (str[i] != ' ')
{
k = 1;
arr[m][j] = str[i];
i++;
j++;
}
if (k == 1)
m++;
}

return (arr);
}
/**
 * _strlen_recursion - length of a string.
 * @s: string
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
int l;
if (*s == '\0')
{
return (0);
}
s++;
l = _strlen_recursion(s) + 1;
return (l);
}
