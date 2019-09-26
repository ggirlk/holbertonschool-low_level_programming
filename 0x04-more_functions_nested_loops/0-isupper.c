#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check if the char is upper or lower.
 * @c: the character to test
 * Return: 0 or 1.
 */
int _isupper(int c)
{
int str;
for (str = 'A'; str <= 'Z'; str++)
{
if (c == str)
{
return (1);
}
else
{
return (0);
}
}
}
