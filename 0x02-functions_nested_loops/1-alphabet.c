#include <stdio.h>
#include "putchar.h"

void print_alphabet(void)
{
char str = 'a';
while (str <= 'z')
{
_putchar(str);
str++;
}
_putchar('\n');
}

