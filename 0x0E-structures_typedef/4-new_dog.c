#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog' name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a new dog or null.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *my_new_dog = malloc(sizeof(struct dog));

if (my_new_dog == NULL)
return (NULL);

my_new_dog->name = name;
my_new_dog->age = age;
my_new_dog->owner = owner;
return (my_new_dog);
}
