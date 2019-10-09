#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: int.
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (counter(1, n));
}
}

/**
 * counter - count sqrt
 * @i: number
 * @n: number
 * Return: sqrt
 */

int counter(int i, int n)
{
if (i * i == n)
return (i);
else if (n > i * i)
return (counter(i + 1, n));
else
return (-1);
}
