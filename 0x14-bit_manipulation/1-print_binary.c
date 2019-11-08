#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: unsigned integer.
 */
void print_binary(unsigned long int n)
{
int k = 0;
if (n == 0)
printf("0");
while (n)
{
k = n & 1;
printf("%d", k);
n = n >> 1;
}
}
