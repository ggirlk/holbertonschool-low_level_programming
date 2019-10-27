#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
int print_char(va_list args)
{
return (printf("%c", va_arg(args, int)));
}
int print_int(va_list args)
{
return (printf("%d", va_arg(args, int)));
}
int print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str)
return (printf("%s", str));
else
return (printf("(nil)"));
}
int print_float(va_list args)
{
return (printf("%f", va_arg(args, double)));
}
/**
 * print_all - prints anything
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
int (*p)(va_list);
_print prints[] = {
{"c", print_char},
{"i", print_int},
{"s", print_string},
{"f", print_float},
{NULL, NULL}
};
unsigned int i = 0, j;
char *separator = ", ";
va_start(args, format);
while (prints[i].c != NULL)
{
j = 0;
while (format[j])
{
if (*prints[i].c == format[j])
{
p = prints[i].f;
p(args);
if (j < strlen(format) - 1)
printf("%s", separator);
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
