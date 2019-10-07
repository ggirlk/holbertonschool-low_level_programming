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
unsigned int i = 0;
char *ch;
ch = NULL;
while (s[i])
{
if (s[i] == c)
{
ch = &s[i - 1];
}
i++;
}

return (ch);

}
