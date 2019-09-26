#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - check if the char is upper or lower.
 *@c: the character to test
 * Return: 0 or 1.
 */
int _isupper(int c)
{
char i;
int ret;

for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
ret = 1;
}
else
{
ret = 0;
}
}
return (ret);
}
