#include<stdio.h>
#include "holberton.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: number 
 * Return: nothing
 */
void print_times_table(int n)
{
int i, j, m, k, l, o;
if (n < 15 && n > 0)
{
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n ; j++)
{
m = i;
if (m >= 10 && m < 100)
{
k = m / 10;
l = m % 10;
_putchar(' ');
_putchar('0' + k);
_putchar('0' + l);
}
else if (m >= 100)
{
o = m / 100;
k = m / 10 - o * 10;
l = m % 10;
_putchar('0' + k);
_putchar('0' + l);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar('0' + m);
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
