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
int i, j = 0, l = 0, k = 0, m = 0, d = 0, f = 0, h = 0;
char **arr;
if (*str == '\0' || str == NULL)
return (NULL);

l = _strlen_recursion(str);
if (l == 0)
return (NULL);

arr = malloc(sizeof(char) * l);
if (arr == NULL)
return (NULL);

for (i = 0; i < l; i++)
{
j = 0;
k = 0;
d = i;
while (str[i] != ' ')
{
k = 1;
i++;
j++;
}
if (k == 1)
{
f = 0;
arr[m] = malloc(sizeof(char) * (j + 1));
if (arr[m] == NULL)
{
while (m <= 0)
{
free(arr[m]);
m--;
}
return (NULL);
}
for (h = d; h < i; h++)
{
arr[m][f] = str[h];
f++;
}
arr[m][f + 1] = '\0';
m++;
}
arr[m] = NULL;
}

return (arr);
}
/**
 * _strlen - length of a string without spaces.
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
