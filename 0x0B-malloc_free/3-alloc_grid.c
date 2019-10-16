#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
int **arr, i, j;
if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int) * width);
if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
