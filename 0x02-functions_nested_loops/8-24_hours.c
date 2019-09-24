#include "holberton.h"
/**
 * function jack_bauer
 * Return: day hours
 */
void jack_bauer(void)
{
int m, e , k, l;

for (e = 0; e < 3; e++)
{
for (m = 0; m <= 9; m++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
if ((e == 2) && (m > 3))
break;
_putchar(e + '0');
_putchar(m + '0');
_putchar(':');
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
}
}
}
}
}
