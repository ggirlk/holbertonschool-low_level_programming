#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include "holberton.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, k;
size_t i = 0;
char s;
if (filename == NULL)
return (-1);

f = open(filename, O_RDWR | O_APPEND);
if (text_content == NULL)
{
if (f == -1)
return (-1);
else
return (1);
}
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
