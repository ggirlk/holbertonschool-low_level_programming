#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of the variable arguments
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
if (n == 0)
return (0);

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);
return (sum);
}
