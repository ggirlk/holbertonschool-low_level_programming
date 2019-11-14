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
int f, k;
size_t i = 0;
char s;
if (filename == NULL && !letters)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
for (i = 0; i < letters; i++)
{
k = read(f, &s, 1);
if (k == -1)
return (0);
if (k == 0)
break;
k = write(STDOUT_FILENO, &s, 1);
if (k == -1)
return (0);
}

f = close(f);
return (i);
}
