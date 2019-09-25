#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the 98 fibonacci numbers
 *
 *Return: 0
 */
int main(void)
{
unsigned long first = 0, second = 1, next, c, part1, part2;
for (c = 1; c <= 98; c++)
{
next = first + second;
first = second;
second = next;

if (sizeof(next) <= 4)
{
printf("%lu", next);
}
else
{
part1 = next / 100000000000;
part2 = next % 1000000000000;
printf("%lu", part1);
printf("%ld", part2);
}
if (c == 98)
break;

printf(",");
printf(" ");
}
return (0);
}
