#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, ret = 0;
while (*(s1 + i) != '\0')
i++;

while (*(s2 + j) != '\0')
j++;

if (i < j)
{
ret = -15;
}
else if (i > j)
{
ret = 15;
}
else
{
ret = 0;
}
return (ret);
}
