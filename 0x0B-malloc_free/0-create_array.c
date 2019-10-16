#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars;
 * @size: the size of the memory to print
 * @c: char
 * Return: array of char.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}
if (arr)
return (arr);
else
return (NULL);
}
