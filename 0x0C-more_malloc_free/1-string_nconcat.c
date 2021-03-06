#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd strig
 * @n: bytes;
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int l, l2, i = 0, j = 0, n2 = n;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

l = _strlen_recursion(s1);
l2 = _strlen_recursion(s2);

if (n >= l2)
n2 = l2;

str = malloc(sizeof(str) * (l + n2 + 1));

if (str == NULL)
{
free(str);
return (NULL);
}

for (i = 0; i < (l + n2); i++)
{
if (i < l)
str[i] = s1[i];
else
{
str[i] = s2[j];
j++;
}
}
str[i] = '\0';
return (str);
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
