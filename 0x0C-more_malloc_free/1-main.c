#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    //char *concat;

    //concat = string_nconcat("Holberton ", "School !!!", 6);
    //concat = string_nconcat("Holberton ", "School", 4);
    //concat = string_nconcat(NULL, NULL, 10);
    //concat = string_nconcat("Hello", NULL, 12);
    //printf("%s\n", concat);
    //free(concat);
   // return (0);
	char *s;

	s = string_nconcat("Hello", NULL, 12);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, "Hello", 0);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	s = string_nconcat(NULL, NULL, 10);
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
