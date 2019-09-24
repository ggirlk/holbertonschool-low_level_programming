#include <stdio.h>
#include "holberton.h"
/**
 * print alphabet.
 */
void print_alphabet(void)
{
char str;
for (str = 'a'; str <= 'z', str++)
{
_putchar(str);
}
_putchar('\n');
}

