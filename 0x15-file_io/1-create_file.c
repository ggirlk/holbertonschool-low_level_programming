#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int f, k;
size_t i = 0;
char s;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
f = open(filename, O_RDWR | O_CREAT | O_APPEND | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
for (i = 0; text_content[i] != '\0'; i++)
{
s = text_content[i];
k = write(f, &s, 1);
if (k == -1)
return (-1);
}
f = close(f);
return (1);
}
