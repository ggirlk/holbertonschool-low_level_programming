#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - test if is a palindrome.
 * @s: string
 * Return: int 0 or 1.
 */
int is_palindrome(char *s)
{
int l = _strlen_recursion(s);

return (palindromeCounter(l - 1, 0, s));
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
/**
 * palindromeCounter - count and test chars.
 * @s: string
 * @l: length
 * @i: counter
 * Return: int 0 or 1.
 */
int palindromeCounter(int l, int i, char *s)
{
if (l == 1)
return (1);
if (i == l)
return (1);
if (*(s + l) == *(s + i))
return (palindromeCounter(l - 1, i + 1, s));

return (0);
}
