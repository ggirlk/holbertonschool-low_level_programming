#include <stdio.h>
#include "holberton.h"
/**
 * main - Fizz-Buzz test
 * Return: 0.
 */
int main(void)
{
int str, j;
char fiz[] = "Fizz";
char buz[] = "Buzz";
char fizbuz[] = "FizzBuzz";

for (str = 1; str <= 100; str++)
{
if (str % 3 == 0 && str % 5 == 0)
{
for (j = 0; j < 8; j++)
{
printf("%c", fizbuz[j]);
}
}
else if (str % 5 == 0)
{
for (j = 0; j < 4; j++)
{
printf("%c", buz[j]);
}
}
else if (str % 3 == 0)
{
for (j = 0; j < 4; j++)
{
printf("%c", fiz[j]);
}
}
else
{
printf("%d", str);
}

if (str < 100)
printf(" ");
}

printf("\n");
return (0);
}
