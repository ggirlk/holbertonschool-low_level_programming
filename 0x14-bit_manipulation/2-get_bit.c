#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int
 * Return: 0, 1 or -1;.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i = 64, k = 0, b = 0;
if (n == 0)
return (0);
while (i--)
{
k = n >> i;
if (k & 1)
b = 1;
else
b = 0;

if (i == index)
return (b);

}
return (-1);
}

