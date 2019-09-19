#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char str = 'a';
while (str <= 'z')
{
if (str != 'e')
{
if (str != 'q')
{
putchar(str);
}
}
str++;
}
putchar('\n');
return (0);
}
