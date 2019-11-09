#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @n: int
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
int k = 0;
if (n == 0)
_putchar('0');
while (n)
{
k = n & 1;
n = n >> 1;
if (k == 0)
_putchar('0');
else
_putchar('1');
}
}

