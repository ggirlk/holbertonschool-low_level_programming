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
int i = 0, j = 0, sm1 = 0, sm2 = 0, ret = 0;
while (*(s1 + i))
{
i++;
sm1 += *(s1 + i);
}
while (*(s2 + j))
{
j++;
sm2 += *(s2 + j);
}
if (sm1 < sm2)
{
ret = -15;
}
else if (sm1 > sm2)
{
ret = 15;
}
else
{
ret = 0;
}
return (ret);
}
