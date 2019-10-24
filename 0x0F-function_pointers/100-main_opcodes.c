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
int ar = atoi(argv[1]), i;
char *m = (char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (ar < 0)
{
printf("Error0\n");
exit(2);
}
for (i = ar; i > 0; i--)
{
printf("%x", *m++ & 0xff);
if (i > 1)
printf(" ");
}
printf("\n");
return (0);
}
