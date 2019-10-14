#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of command line arguments
 * @argv: array containing the program command line argument
 * Return: 0 or 1;
 */
int main(int argc, char **argv)
{
int a, b, i, r = 0, coins[] = {25, 10, 5, 2, 1};
if (argc == 2)
{
a = _atoi(argv[1]);
if (a <= 0)
{
printf("0\n");
return (1);
}
for (i = 0; i < 5; i++)
{
if (a >= coins[i])
{
r += a / coins[i];
b = a % coins[i];
if (b != 0)
{
a = b;
}
else
{
printf("%d\n", r);
return (0);
}
}
}
}
else
{
printf("Error\n");
return (1);
}

return (0);
}

/**
 * _isdigit - check if the char is digit or not.
 * @c: the character to test
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
int n, ret = 0;
for (n = '0'; n <= '9'; n++)
{
if (c == n)
{
ret = 1;
}
}
return (ret);
}
/**
 * _atoi - convert string to integer;
 * @s: string;
 * Return: int;
 */
int _atoi(char *s)
{
int i, k = 0, ret = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
k = 1;
if (_isdigit(s[i]) == 1)
{
ret = ret * 10 + s[i] - '0';
}
}
if (k == 1)
return (ret * -1);

return (ret);
}

/**
 * _strlen_recursion - length of a string.
 * @s: string
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
int l;
if (*s == '\0')
{
return (0);
}
s++;
l = _strlen_recursion(s) + 1;
return (l);
}
