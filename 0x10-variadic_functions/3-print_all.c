#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
int count(const char *format);
void print_all(const char * const format, ...)
{
//unsigned int n;

va_list args;
//const char *str = NULL;
//n = count(format);
va_start(args, format);

printf("%s", va_arg(args, char *));

printf("\n");
va_end(args);
}
int count(const char *format)
{
int i = 0, j = 0, n = 0;
char *arf = "cnfi";
while (format[i] != '\0')
{
j = 0;
while (arf[j] != '\0')
{
if (arf[j] == format[i])
n++;
j++;
}
i++;
}
return (n);
}
