#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - print numbers from 0 to 9.
 *
 * Return: nothing.
 */
void print_numbers(void)
{
int str;
for (str = 0; str <= 9; str++)
{
_putchar('0' + str);
}
_putchar('\n');
}
