#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - test if th number is primary or no.
 * @n: number
 * Return: int.
 */
int primeCounter(int k, int n);
int is_prime_number(int n)
{
return (primeCounter(2, n));
}
/**
 * primeCounter - test if it is primary or no
 * @k: counter
 * @n number
 * Return: int
 */
int primeCounter(int k, int n)
{
if (k < n && n % k == 0)
return (0);
else if (k < n && n % k != 0)
return (1);
else if (n == 0)
return (-1);
else
{
primeCounter(2 + 1, n);
return (0);
}
}
