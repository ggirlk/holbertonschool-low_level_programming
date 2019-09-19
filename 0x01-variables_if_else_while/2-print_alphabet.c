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
putchar(str);
str++;
}
putchar('\n');
return (0);
}
