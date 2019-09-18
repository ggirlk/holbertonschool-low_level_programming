#include <stdio.h>
/**
 * main - Entry point
 * prints the different types sizes
 * Return: Always 0 (Success)
 */
char s;
int d;
long int li;
long long int lli;
float f;
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(s));
printf("Size of int: %d byte(s)\n", sizeof(d));
printf("Size of long int: %d byte(s)\n", sizeof(li));
printf("Size of long long int: %d byte(s)\n", sizeof(lli));
printf("Size of float: %d byte(s)\n", sizeof(f));
return (0);
}
