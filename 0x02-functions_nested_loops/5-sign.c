#include "holberton.h"
/**
 * print_sign - test if the number is positive or not
 *@n: the number to test
 * Return: 1 if variable is positive 0 if it's 0 and -1 if it's negative
 */
int print_sign(int n)
{
int ret;

if (n == 0)
{
ret = 0;
_putchar('0');
}
else if (n > 0)
{
ret = 1;
_putchar('+');
}
else
{
ret = -1;
_putchar('-');
}
return (ret);
}
