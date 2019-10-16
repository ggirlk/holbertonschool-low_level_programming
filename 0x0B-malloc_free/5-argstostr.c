#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: size of arguments
 * @av: array of arguments
 *
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
int i, j = 0, l = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (j = 0; j < ac; j++)
l += _strlen_recursion(av[j]) + 1;
str = malloc(sizeof(char) * l);
if (str == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
l = _strlen_recursion(av[j]);
for (i = 0; i < l; i++)
{
str[k] = av[j][i];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
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
