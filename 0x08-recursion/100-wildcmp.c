#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: int.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
return (1);
if (*s2 == '*' && *(s1 + 1) != '\0')
return (0);

return (0);
}
