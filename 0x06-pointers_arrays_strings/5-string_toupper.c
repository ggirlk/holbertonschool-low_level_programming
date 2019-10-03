#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase..
 * @str: string
 * Return: char.
 */
char *string_toupper(char *str)
{
int i = 0;
char a, b;

while (str[i])
{
a = 'a';
b = 'A';
while (a < 'z' && b < 'Z')
{
if (str[i] == a)
{
*(str + i) = b;
}
a++;
b++;
}
i++;
}
return (str);
}
