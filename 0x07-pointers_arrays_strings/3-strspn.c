#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string given
 * @c: searchen character
 *
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;

while (*s)
{
if (*s == *accept)
{
break;
}
i++;
s++;
}
return (i + 1);
}
