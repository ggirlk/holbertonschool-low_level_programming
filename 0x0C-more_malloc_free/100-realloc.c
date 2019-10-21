#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: size of the new memory block
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr2;

if (ptr == NULL)
{
ptr2 = malloc(new_size + 1);
if (ptr2 == NULL)
{
free(ptr2);
free(ptr);
return (NULL);
}
return (ptr2);
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr == NULL)
{
free(ptr);
return (NULL);
}
ptr2 = malloc(new_size);
if (ptr2 == NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
_memcpy(ptr2, ptr, old_size);

free(ptr);
return (ptr2);
}
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
unsigned int i = 0;
while (i < n && src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
