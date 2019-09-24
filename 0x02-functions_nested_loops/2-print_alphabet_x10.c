#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return : nothing
 */
void print_alphabet_x10(void)
{
char str;
int i;
for (i = 0; i < 20; i++)
{
for (str = 'a'; str <= 'z'; str++)
_putchar(str);

_putchar('\n');
i++;
}
}
