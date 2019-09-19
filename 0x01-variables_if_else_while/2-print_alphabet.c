#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char str;
for (str = 'a'; str <= 'z'; str++)
{
putchar(str);
}
putchar("\n");
return (0);
}
