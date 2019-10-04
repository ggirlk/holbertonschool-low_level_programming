#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 * Return: nothing.
 */
void print_number(int n)
{
int k, j, l, m, h = 0;
if (n < 0)
{
h = 1;
n = -1 * n;
}
if (n > 10 && n < 100)
{
k = n % 10;
j = n / 10;
if (h == 1)
{
_putchar('-');
}
_putchar('0' + j);
_putchar('0' + k);
}
else if (n >= 100 && n < 1000)
{
l = n / 100;
k = n % 10;
j = n / 10 - l * 10;
if (h == 1)
{
_putchar('-');
}
_putchar('0' + l);
_putchar('0' + j);
_putchar('0' + k);
}
else if (n >= 1000 && n < 10000)
{
k = n % 10;
n = n / 10;
j = n % 10;
n = n / 10;
l = n % 10;
n = n / 10;
m = n % 10;

if (h == 1)
{
_putchar('-');
}
_putchar('0' + m);
_putchar('0' + l);
_putchar('0' + j);
_putchar('0' + k);
}
else
{
if (h == 1)
{
_putchar('-');
}
_putchar('0' + n);
}
}
