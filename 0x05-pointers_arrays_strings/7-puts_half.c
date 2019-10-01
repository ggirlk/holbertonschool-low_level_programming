#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @s: string
 * Return: nothing.
 */
void puts_half(char *str)
{
int i = 0, j;
while (str[i])
{
i++;
}
for (j = i / 2; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
