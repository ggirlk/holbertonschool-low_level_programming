#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - print char
 * @args: list of args
 * Return: int
 */
int print_char(va_list args, char *sp)
{
return (printf("%s%c", sp, va_arg(args, int)));
}
/**
 * print_int - print int
 * @args: list of args
 * Return: int
 */
int print_int(va_list args, char *sp)
{
return (printf("%s%d", sp, va_arg(args, int)));
}
/**
 * print_string - print string
 * @args: list of args
 * Return: int
 */
int print_string(va_list args, char *sp)
{
const char *str = va_arg(args, char *);
if (!str)
str = "(nil)";

return (printf("%s%s", sp, str));
}
/**
 * print_float - print float
 * @args: list of args
 * Return: int
 */
int print_float(va_list args, char *sp)
{
return (printf("%s%f", sp, va_arg(args, double)));
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
_print prints[] = {
{"c", print_char},
{"i", print_int},
{"s", print_string},
{"f", print_float},
{NULL, NULL}
};
unsigned int i = 0, j;
char *sp = "";
va_start(args, format);
while (format && format[j])
{
i = 0;
while (prints[i].c)
{
if (*prints[i].c == format[j])
{
prints[i].f(args, sp);
sp = ", ";
}
i++;
}
j++;
}
printf("\n");
va_end(args);
}
