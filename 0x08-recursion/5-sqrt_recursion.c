#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number
 * @y: number
 * Return: int.
 */
int counter (int i, int n);
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


int counter (int i, int n)
{
if (i * i == n)
return (i);
else if (n > i * i)
return (counter(i + 1, n));
else
return (-1);
}
