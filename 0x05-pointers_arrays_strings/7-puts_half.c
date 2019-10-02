#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string
 * Return: nothing.
 */
void puts_half(char *str)
{
int i = 0, j, e;
while (str[i])
{
i++;
}
if (i % 2 != 0)
{
e = i / 2 + 1;
}
else
{
e = i / 2;
}
for (j = e; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
