#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *main - prints the 98 fibonacci numbers
 *
 *Return: 0
 */
int main(void)
{
double first = 0, second = 1, next, c;

for (c = 1; c <= 98; c++)
{
next = first + second;
first = second;
second = next;
printf("%f", floor(next));

if (c == 98)
break;

printf(",");
printf(" ");
}
return (0);
}
