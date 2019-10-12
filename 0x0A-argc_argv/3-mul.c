#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a number
 * @argc: number of command line arguments
 * @argv: array containing the program command line argument
 * Return: 1;
 */
int main (int argc, char **argv)
{
int *a, *b, r;
if (argc >= 2)
{
*a = *argv[1];
*b = *argv[2];
r = a * b;
printf("%d\n %d\n", *a, r);
}
else
{
printf("Error");
}
return (1);
}
