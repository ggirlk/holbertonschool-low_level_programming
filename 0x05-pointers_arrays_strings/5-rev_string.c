
#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 * Return: nothing;
 */
void rev_string(char *s)
{
int i = 0, j;
char str;
while (s[i])
{
i++;
}
j = i - 1;
for (i = 0; i < j; i++)
{
str = *(s + i);
*(s + i) = *(s + j);
*(s + j) = str;
j--;
}
}
