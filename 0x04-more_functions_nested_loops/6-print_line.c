#include "holberton.h"
#include <stdio.h>
/**
 * print_line - draw a straight line in the terminal.
 * @n: number of _
 * Return: nothing.
 */
void print_line(int n)
{
int str;
if (n >= 0)
{
for (str = 0; str < n; str++)
{
_putchar(95);
}
}
_putchar('\n');
}
