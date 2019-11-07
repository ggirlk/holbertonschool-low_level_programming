#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, j = 0, r = 0;
char stTemp[2];
if (b == NULL)
return (0);
while (b[i])
{
if (_isalpha(b[i]) != 0)
return (0);
sprintf(stTemp, "%c", b[i]);
j = atoi(stTemp);
r += (j *_pow_recursion(2, i));
i++;
}
return (r);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number
 * @y: number
 * Return: int.
 */
unsigned int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
/**
 * _isalpha - test if alphabet or not.
 *@c: the character to test
 * Return: 1 if variable is a lowercase character and 0 if not
 */
int _isalpha(char c)
{
char str;
int ret = 0;
for (str = 'a'; str <= 'z'; str++)
{
if (c == str)
{
ret = 1;
}
}
for (str = 'A'; str <= 'Z'; str++)
{
if (c == str)
{
ret = 1;
}
}
return (ret);
}
