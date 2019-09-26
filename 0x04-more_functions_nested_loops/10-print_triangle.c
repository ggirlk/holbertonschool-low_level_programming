#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - a triangle
 * @size: the size of the triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
int str, j;
if (size > 0)
{
for (str = 0; str < size; str++)
{
for (j = 0; j < size; j++)
{
if (j >= size - (str + 1))
{
_putchar(35);
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
