#include <stdio.h>
#include "holberton.h"
/**
 * print_square - draw a diagonal line on the terminal
 * @size: the size of the square
 * Return: nothing.
 */
void print_square(int size)
{
int str, j;
if (size >= 0)
{
for (str = 0; str < size; str++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
