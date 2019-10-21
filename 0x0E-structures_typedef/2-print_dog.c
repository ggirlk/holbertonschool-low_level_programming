#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * @d: instance of dog struct
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->age <= 0)
d->age = 0;
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\n", d->name);
printf("age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
