#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the 98 fibonacci numbers
 *
 *Return: 0
 */
int main (void)
{
int first = 0, second = 1, next, c;
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
printf("%d", next);
printf(",");
printf(" ");
}
return (0);
}
