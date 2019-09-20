#include <stdio.h>
/**
 * main - Entry point
 * prints numbers from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
while (n < 100)
{
if (n < 10)
{
putchar('0' + 0);
putchar('0' + n);
}
else
{
putchar('0' + n);
}
putchar(',');
putchar(' ');
n++;
}
return (0);
}
