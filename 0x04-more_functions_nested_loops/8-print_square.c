#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
int str, j;
if (n >= 0)
{
for (str = 0; str < n; str++)
{
for (j = 0; j < str; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
