#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum of a & b
 *
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - difference of a & b
 *
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - product of a by b
 *
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division of a by b
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - remainder of the division of a by b
 *
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mod(int a, int b)
{
return (a % b);
}
