#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string given
 * @accept: searchen character
 *
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, k = 0;

while (s[i])
{
if (s[i] == accept[0])
{
break;
}
k++;
i++;
}
if (k != 0)
k++;

return (k);
}
