#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: string given
 * @accept: searchen character
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{

int i = 0, j = 0, k;

while (s[i])
{
k = 0;
while (accept[j])
{
if (s[i] == accept[j])
k = 1;

j++;
}
j = 0;
if (k == 1)
return (s + i);
i++;
}
if (k == 0)
return (NULL);

return ('\0');
}
