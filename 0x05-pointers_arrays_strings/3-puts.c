#include "holberton.h"
#include <stdio.h>
/**
 * _puts - print a string.
 * @str: string to be printed.
 * Return: nothing.
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
