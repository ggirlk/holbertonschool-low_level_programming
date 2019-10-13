#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the program's name
 * @argc: number of command line arguments
 * @argv: array containing the program command line argument
 * Return: 0;
 */
int main(int argc, char **argv)
{
if (*argv != '\0')
{
printf("%d\n", argc - 1);
}
return (0);
}
