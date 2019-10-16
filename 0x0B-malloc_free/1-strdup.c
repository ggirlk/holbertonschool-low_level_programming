#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory;
 * @str: string
 * Return: pointer to a new string;.
 */
char *_strdup(char *str)
{
int i, l;
char *nstr;
if (str == NULL)
return (NULL);

l = _strlen_recursion(str);
nstr = malloc(sizeof(char) * l);
if (nstr == NULL)
return (NULL);

for(i = 0; i < l; i++)
nstr[i] = str[i];

return (nstr);

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
