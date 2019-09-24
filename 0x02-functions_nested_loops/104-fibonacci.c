#include "holberton.h"
/**
 *main - prints the 98 fibonacci numbers
 *
 *Return: 0
 */
int main (void)
{
char ch[10];
int i, first = 0, second = 1, next, c;
for (c = 1; c <= 98; c++)
{
if (c <= 2)
next = c;
else
{
next = first + second;
first = second;
second = next;
}
ch[0] = next;
for (i = 0; ch[i] != '\0'; ++i)
{
_putchar('0' + ch[i]);

}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
return (0);
}
