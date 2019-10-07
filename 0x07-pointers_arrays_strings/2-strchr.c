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
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
return ('\0');
}
