#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - test if is a palindrome.
 * @s: string
 * Return: int 0 or 1.
 */
int is_palindrome(char *s)
{
int l = 0;
while (*(s + l) != '\0')
l++;
return (palindromeCounter(l - 1, 0,s));

return (0);
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
if (i == l)
return (1);
if (l == 1)
return (1);
if (*(s + l) == *(s + i))
return (palindromeCounter(l - 1,i + 1,s));

return (0);
}
