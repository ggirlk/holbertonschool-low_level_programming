#include "holberton.h"

/**
 * _puts_recursion - that prints a string.
 * @s string to print
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
int  i = 0;
_putchar(*(s + i));
if (*(s + i) != '\0')
{
i++;
_puts_recursion(s + i);
}
else
{
_putchar('\n');
}
}
