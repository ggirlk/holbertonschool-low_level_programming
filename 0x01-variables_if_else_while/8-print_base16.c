#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
char str;
while (n < 10)
{
putchar(n);
n++;
}
str = 'a';
while (str <= 'f')
{
putchar(str);
str++;
}
putchar('\n');
return (0);
}
