#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: the hole string.
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i])
i++;

while (src[j])
{
*(dest + i) = *(src + j);
j++;
i++;
}

*(dest + i) = '\0';
return (dest);
}
