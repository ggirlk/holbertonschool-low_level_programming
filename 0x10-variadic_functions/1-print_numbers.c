#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to separate between numbers
 * @n: number of args
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, a;
va_list args;
if (separator == NULL)
separator = "";
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
