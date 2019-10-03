#include "holberton.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @str: string to encode.
 * Return: char.
 */
char *leet(char *str)
{
int i = 0, j;
char min[] = {'a', 'e', 'o', 't', 'l'};
char maj[] = {'A', 'E', 'O', 'T', 'L'};
int r[] = {'4', '3', '0', '7', '1'};
while (str[i])
{
j = 0;
while (min[j])
{
if (str[i] == min[j] || str[i] == maj[j])
{
str[i] = r[j];
}
j++;
}
i++;
}
return (str);
}
