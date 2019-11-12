#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: number of letters
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
size_t i = 0, k;
char s;
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY, 0);
if (f == 0)
return (0);
for (i = 0; i < letters; i++)
{
k = read(f, &s, 1);
if (k == 0)
break;
write(1, &s, 1);
i++;
}
return (i);
}
