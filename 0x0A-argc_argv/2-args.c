#include "holberton.h"
#include <stdio.h>
/**
 * main - prints a number
 * @argc: number of command line arguments
 * @argv: array containing the program command line argument
 * Return: 0;
 */
int main (int argc, char **argv)
{
int i = 0;
if (argc >= 1)
{
while (i < argc)
{
printf("%s\n", *(argv + i));
i++;
}
}
return (0);
}
