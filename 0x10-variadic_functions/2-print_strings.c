#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
const char *str = NULL;
if (separator == NULL)
separator = "";
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);
if (!str)
printf("(nile)");
else
printf("%s", str);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
