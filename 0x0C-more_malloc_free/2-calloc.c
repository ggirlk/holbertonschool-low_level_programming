#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);

if (arr == NULL)
{
free(arr);
return (NULL);
}
_memset(arr, 0, (nmemb * size));

return (arr);
}
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
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
