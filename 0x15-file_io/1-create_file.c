#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include "holberton.h"

/**
 * create_file _ creates a file.
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
return(1);
f = open(filename, O_RDWR | O_CREAT | O_APPEND);
if (f == -1)
return (0);
for (i = 0; text_content[i] != '\0';)
{
i++;
}
k = write(STDOUT_FILENO, &s, i);
if (k == -1)
return (-1);
i++;
f = close(f);
return (1);
}
