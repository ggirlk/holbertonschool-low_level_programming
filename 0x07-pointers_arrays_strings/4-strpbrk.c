#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string given
 * @accept: searchen character
 *
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
int i = j = k = 0;
char *str;

while (s[i])
{
k = 0;
while (accept[j])
{
if (s[i] == accept[j])
return (&s[i]);

j++;
}
j = 0;
i++;
}

}
