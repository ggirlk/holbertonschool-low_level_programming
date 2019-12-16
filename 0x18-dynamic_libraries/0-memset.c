#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: constant byte
 * @n: the size of the memory to print
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0, j = 0;
char **str = &s;

while (i < n && str[i])
{
while (j < n && str[i])
{
str[i][j] = b;
j++;
}
i++;
}
return (*str);
}
