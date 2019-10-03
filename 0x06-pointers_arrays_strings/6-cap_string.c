#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string..
 * @str: string
 * Return: char..
 */
char *cap_string(char *str)
{
int i = 0, k = 0;
char a, b;
while (str[i])
{
a = 'a';
b = 'A';
if (k == 1)
{
while (a < 'z' && b < 'Z')
{
if (str[i] == a)
str[i] = b;
a++;
b++;
}
}
if (str[i] == ' ' || str[i] == '.')
{
k = 1;
}
else
{
k = 0;
}
i++;
}

return (str);
}
