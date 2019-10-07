#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string given
 * @c: searchen character
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
int k = 0;
while (*s)
{
if (*s == c)
{
k = 1;
return (s);
}
s++;
}
if (k == 0)
{
return ("NULL");
}
return ('\0');
}
