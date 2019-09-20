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
putchar(0);
putchar(n);
}
else
{
putchar(n);
}
putchar(',');
putchar(' ');
n++;
}
return (0);
}
