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
char str;
char *p = &str;
while (dest[i])
{
*(p + i) = *(dest + i);
i++;
}

while (src[j])
{
*(p + i) = *(src + j);
i++;
j++;
}
*(p + i) = '\0';
return (src);
}
