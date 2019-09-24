#include "holberton.h"
/**
 * prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
char str;
int i;
for (i = 0; i < 10; i++) {
for (str = 'a'; str <= 'z'; str++) {
_putchar(str);
}
_putchar('\n');
i++;
}
}
