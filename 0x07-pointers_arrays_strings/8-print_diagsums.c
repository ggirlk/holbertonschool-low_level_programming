#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i = 0, j = 0, k, r1 = 0, r2 = 0;
while (i < size)
{
while (j < size)
{
k = *a++;
if (i == j)
{
r1 += k;
}
if (i + j == size - 1)
{
r2 += k;
}
j++;
}
j = 0;
i++;
}
printf("%d, %d\n", r1, r2);
}
