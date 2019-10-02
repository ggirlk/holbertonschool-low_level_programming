#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - print a string.
 * @str: string to be printed.
 * Return: nothing.
 */
void puts2(char *str)
{
int i = 0;
while (str[i])
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
