#include "holberton.h"
/**
 * times_table.
 *
 * return void
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9 ; i++)
{
	for (j = 0; j <= 9 ; j++)
	{
		k = i * j;
		_putchar('0' + k);
		if (k == 81)
		break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
}
