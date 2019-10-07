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
unsigned int i = 0, j = 0, k = 0;

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
if (k == 0)
break;

i++;
}
return (i);
}
