#include <stdio.h>
/**
 * main - Entry point
 * prints reverse alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char str = 'z';
while (str >= 'a')
{
putchar(str);
str--;
}
putchar('\n');
return (0);
}
