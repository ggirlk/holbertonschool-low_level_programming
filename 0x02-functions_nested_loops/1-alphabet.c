#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - print alphabets.
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
char str = 'a';
while (str <= 'z')
{
_putchar(str);
str++;
}
_putchar('\n');
}

