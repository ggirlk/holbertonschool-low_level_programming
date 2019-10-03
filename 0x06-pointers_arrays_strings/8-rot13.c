#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode.
 * Return: char.
 */
char *rot13(char *str)
{
int i = 0, j, k = 0;
char al1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char al2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

while (str[i])
{
j = 0;
while (al1[j] && k == 0)
{
if (str[i] == al1[j])
{
str[i] = al2[j];
k = 1;
}
j++;
}
k = 0;
i++;
}
return (str);
}
