#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - reverses a string.
 * @s: string to be reversed.
 * Return: nothing;
 */
void print_rev(char *s)
{
int i = 0, j;
while (s[i])
{
i++;
}
j = i - 1;
while (s[j])
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
