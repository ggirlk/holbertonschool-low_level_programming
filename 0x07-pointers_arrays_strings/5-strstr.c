#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring;
 * @haystack: string given
 * @needle: searchen character
 *
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, k;
while (haystack[i])
{
k = 0;

while (needle[j])
{
if (haystack[i] == needle[j])
{
k = 1;
j++;
}
else
{
continue;
}
}

if (k == 1)
return (haystack + i);
i++;
}

if (k == 0)
return (NULL);

return ('\0');
}
