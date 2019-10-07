#include "holberton.h"


/**
 * print_chessboard - prints a chessboard
 * @a: chessboard value
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8)
{
while (j < 8)
{
_putchar(a[i][j]);

if (j == 7)
_putchar('\n');

j++;
}
i++;
}
}
