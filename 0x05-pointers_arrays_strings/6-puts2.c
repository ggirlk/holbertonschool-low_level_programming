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
_putchar(str[i]);
i+=2;
}
_putchar('\n');
}
