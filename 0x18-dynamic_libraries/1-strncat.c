#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: nbr of chars to take from src
 * Return: the hole string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i])
i++;

while (j < n && src[j] != '\0')
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';
return (dest);
}
