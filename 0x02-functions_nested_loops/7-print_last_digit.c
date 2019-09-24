#include "holberton.h"
/**
 * function print_last_digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
int m;
if(n < 0)
n = n*-1;

m = n%10;
_putchar('0' + m);
return (m);
}
