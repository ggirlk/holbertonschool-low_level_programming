#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - print binary.
 * @n: int
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
int i = 32, k = 0, tst = 0;
if (n == 0)
_putchar('0');
while (i--)
{
k = n >> i;
if (k & 1)
tst = 1;
if (tst == 1)
{
if (k & 1)
_putchar('1');
else
_putchar('0');
}
}
}

