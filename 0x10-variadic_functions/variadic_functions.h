#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct op - Struct op
 *
 * @c: The char
 * @f: The function associated
 */
typedef struct _print
{
char *c;
int (*f)(va_list args, char *);
} _print;
void print_all(const char * const format, ...);
#endif
