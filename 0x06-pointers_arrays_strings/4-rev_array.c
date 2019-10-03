#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1;
int arr;
for (i = 0; i < j; i++)
{
arr = a[i];
a[i] = a[j];
a[j] = arr;
j--;
}

}
