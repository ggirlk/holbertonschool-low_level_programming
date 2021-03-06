#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: size of argv
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int r, a, b, (*fn)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
fn = get_op_func(argv[2]);
if (!fn)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
r = fn(a, b);
printf("%d\n", r);

return (0);
}
