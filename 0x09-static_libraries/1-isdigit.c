#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check if the char is digit or not.
 *@c: the character to test
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
int n;
int ret = 0;
for (n = '0'; n <= '9'; n++)
{
if (c == n)
{
ret = 1;
}
}
return (ret);
}
