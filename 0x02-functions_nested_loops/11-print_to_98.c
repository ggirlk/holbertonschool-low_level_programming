#include "holberton.h"

/**
 * print_to_98 - print to 98
 * @n: the begining number
 * Return: nothing.
 */
void print_to_98(int n)
{
if(n < 0)
{
int i, x, y, z;
for (i = 0; i >= n; i--)
{
if (i >= 10)
{
x = i / 10;
y = i % 10;
_putchar('0' +x);
_putchar('0' +y);
}
else if (i >= 100)
{
x = (i / 10) % 10;
y = i % 10;
z = i / 100;
_putchar('0' +x);
_putchar('0' +y);
_putchar('0' +z);
}
else
{
_putchar('0' + i);
}

}
}
}
