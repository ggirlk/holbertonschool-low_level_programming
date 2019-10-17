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
