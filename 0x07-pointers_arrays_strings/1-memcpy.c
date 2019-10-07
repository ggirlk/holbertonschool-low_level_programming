#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area to copy
 * @n: size of the memory to copy
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0, j = 0;
char **str = &dest;
char **strc = &src;
while (i < n && str[i])
{
while (j < n && str[i])
{
str[i][j] = strc[i][j];
j++;
}
i++;
}
return (*str);
}
