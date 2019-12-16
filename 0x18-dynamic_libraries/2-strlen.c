#include "holberton.h"
#include <stdio.h>

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
