#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: instance of dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
exit(-1);

d->name = name;
d->age = age;
d->owner = owner;
}
