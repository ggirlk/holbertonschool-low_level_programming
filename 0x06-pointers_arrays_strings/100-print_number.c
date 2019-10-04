#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 * Return: nothing.
 */
void print_number(int n)
{
int k, j, l, m;
if (n < 0)
{
_putchar('-');
n = -1 * n;
}
if (n >= 1000)
{
m = n / 1000;
m = m % 10;
_putchar('0' + m);
}
if (n >= 100)
{
l = n / 100;
l = l % 10;
_putchar('0' + l);
}
if (n >= 10)
{
k = n % 10;
j = n / 10;
j = j % 10;
_putchar('0' + j);
_putchar('0' + k);
}
if (n < 10)
{
_putchar('0' + n);
}
}
