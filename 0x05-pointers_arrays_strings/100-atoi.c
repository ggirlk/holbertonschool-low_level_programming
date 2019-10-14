#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer..
 * @s: string to be converted
 * Return: integer.
 */

int _atoi(char *s)
{
int i, k = 1, ret = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
k *= -1;
if (_isdigit(s[i]) == 1)
{
ret = ret * 10 + s[i] - '0';
}
}
ret *= k;

return (ret);
}

/**
 * _isdigit - check if the char is digit or not.
 *@c: the character to test
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
int n, ret = 0;
for (n = '0'; n <= '9'; n++)
{
if (c == n)
{
ret = 1;
}
}
return (ret);
}
