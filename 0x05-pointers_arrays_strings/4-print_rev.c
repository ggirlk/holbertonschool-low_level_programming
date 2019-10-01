#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - reverses a string.
 * @s: string to be reversed.
 * Return: nothing;
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (s[i])
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
