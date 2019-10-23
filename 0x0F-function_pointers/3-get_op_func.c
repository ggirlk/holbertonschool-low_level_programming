#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - performs simple operations
 * @s: The operator
 * @a: integer
 * @b: integer
 * Return: the result
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (s && ops[i].op != NULL)
{
if (ops[i].op == s)
return (ops[i].f);

i++;
}

return (NULL);
}
