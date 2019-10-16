#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space in memory;
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to a new string;.
 */
char *str_concat(char *s1, char *s2)
{
int i, l, l2, j = 0;
char *nstr;
if (s1 == NULL && s2 == NULL)
return (NULL);

l = _strlen_recursion(s1);
l2 = _strlen_recursion(s2);

nstr = malloc(sizeof(char) * (l + l2));
if (nstr == NULL)
return (NULL);

for (i = 0; i < l; i++)
{
nstr[j] = s1[i];
j++;
}
for (i = 0; i < l2; i++)
{
nstr[j] = s2[i];
j++;
}
nstr[j] = '\0';

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
