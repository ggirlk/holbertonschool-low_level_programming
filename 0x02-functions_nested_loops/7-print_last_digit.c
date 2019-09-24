#include "holberton.h"
/**
 * print_last_digit - prints the last degit of a number given
 *@n: the number to get it's last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
int m;
if (n < 0)
n = n * -1;

m = n % 10;
_putchar('0' + m);
return (m);
}
