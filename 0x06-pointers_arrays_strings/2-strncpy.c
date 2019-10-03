#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string.
 * @dest: 1st string
 * @src: 2nd string
 * @n: nbr of hcars to copy
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
   *(dest + i) = *(src + i);

while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
