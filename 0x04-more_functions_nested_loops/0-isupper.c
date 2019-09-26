#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check if the char is upper or lower.
 * @c: the character to test
 * Return: 0 or 1.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
