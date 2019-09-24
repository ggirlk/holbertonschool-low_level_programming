#include "holberton.h"
/**
 * times_table.
 *
 * return void
 */
void times_table(void)
{
int i, j, m, k, l;
for (i = 0; i <= 9 ; i++)
{
for (j = 0; j <= 9 ; j++)
{
m = i * j;
if (m >= 10)
{
k = m / 10;
l = m % 10;
_putchar('0' + k);
_putchar('0' + l);
} else
{
_putchar('0' + m);
}
if (j == 9)
{
break;
}

_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
