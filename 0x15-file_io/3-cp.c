#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include "holberton.h"

/**
 * main - copy file to file.
 * @argc: length of argv
 * @argv: vector argument
 * Return: int
 */
int main(int argc, char **argv)
{
int f1, f2, k1, k2;
char s[1024];
if (argc < 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f1 = open(argv[1], O_RDONLY);
f2 = open(argv[2], O_RDWR | O_CREAT | O_APPEND | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
while (1)
{
k1 = read(f1, s, 1024);
if (k1 == 0)
break;
if (f1 == -1 && k1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
k2 = write(f2, s, 1024);
if (f2 == -1 && k2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
k1 = close(f1);
k2 = close(f2);
if (k1 == -1 && k2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (k1 == -1) ? f1 : f2);
exit(100);
}
return (0);
}
