#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char str = 'a', str2 = 'A';;
while (str <= 'z')
{
putchar(str);
str++;
}
while (str2 <= 'Z')
{
putchar(str2);
str2++;
}
putchar('\n');
return (0);
}
