#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers.
 * @max: max
 * @min: min
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *arr, i = 0, l;
if (min > max)
return (NULL);
l = max - min + 1;
arr = malloc(sizeof(int) * l);

if (arr == NULL)
return (NULL);

for (i = 0; i < l; i++)
{
arr[i] = min;
min++;
}
arr[i] = min;
return (arr);
}
