#include "holberton.h"
/**
 * swap_int - reset n to 98.
 * @a: variable to be swapping with b.
 * @b: variable to be swapping with a.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
