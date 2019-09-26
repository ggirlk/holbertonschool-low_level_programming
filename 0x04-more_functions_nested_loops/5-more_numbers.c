#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0 to 9 10 times
 *
 * Return: nothing.
 */
void more_numbers(void)
{
int str, i, k;
for (str = 0; str < 10; str++)
{
for (i = 0; i <= 14; i++)
{
k = i % 10;
if (i >= 10)
_putchar('0' + 1);

_putchar('0' + k);

}
_putchar('\n');
}
}
