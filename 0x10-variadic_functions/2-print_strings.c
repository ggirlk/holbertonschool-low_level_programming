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
if (n == 0 || separator == NULL)
return;
va_start(args, n);
for (i = 0; i < n; i++)
{
if (va_arg(args, char *) == NULL)
printf("(nile)");
else
printf("%s", va_arg(args, char *));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
