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
if (_strlen_recursion(s1) == 0)
s1 = "";
if (_strlen_recursion(s2) == 0)
s1 = "";

l = _strlen_recursion(s1);
l2 = _strlen_recursion(s2);

if (n >= l2)
n2 = l2;

str = malloc(sizeof(char) * (l + n2 - 1));

if (str == NULL)
return (NULL);

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
str[i + 1] = '\0';
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
