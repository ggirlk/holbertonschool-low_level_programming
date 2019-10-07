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
char *ch;
ch = NULL;
while (*s)
{
if (*s == c)
{
ch = s - 1;
}
s++;
}
return (ch);
}
