#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 & 4.
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
int str;
for (str = 0; str <= 9; str++)
{
if (str != 2 && str != 4)
_putchar('0' + str);
}
_putchar('\n');
}
