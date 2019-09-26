#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - check if the char is upper or lower.
 *@c: the character to test
 * Return: 0 or 1.
 */
int _isupper(int c) {
char str;
int ret = 0;
for (str = 'A'; str <= 'Z'; str++)
{
if (c == str)
{
ret = 1;
}
}
return (ret);
}
