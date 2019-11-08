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
unsigned int i = 0, k = 0, r = 0;

if (b == NULL)
return (0);
k = _strlen((char *)b) - 1;

while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
r += (1 << k);
i++;
k--;
}
return (r);
}
/**
 * _strlen - count sting length.
 * @s: string
 * Return: string length.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
