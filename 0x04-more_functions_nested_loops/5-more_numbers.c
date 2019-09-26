#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 9 10 times
 *
 * Return: nothing.
 */
void more_numbers(void)
{
int str, i;
for (str = 0; str <= 14; str++)
{
for (i = 0; i < 10; i++)
_putchar('0' + i);
}
_putchar('\n');
}
