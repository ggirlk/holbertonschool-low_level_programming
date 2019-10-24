#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of this function
 * @argc: size of argv
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int ar, i;
char *m = (char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
ar = atoi(argv[1]);
if (ar < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < ar; i++)
{
printf("%02x", *m++ & 0xff);
if (i < (ar - 1))
printf(" ");
}
printf("\n");
return (0);
}
