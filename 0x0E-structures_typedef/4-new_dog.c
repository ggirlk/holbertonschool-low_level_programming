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
my_new_dog->name = malloc(sizeof(name));
if (my_new_dog->name == NULL)
{
free(my_new_dog->name);
free(my_new_dog);
return (NULL);
}
my_new_dog->name = name;
my_new_dog->age = age;
my_new_dog->owner = malloc(sizeof(owner));
if (my_new_dog->owner == NULL)
{
free(my_new_dog->owner);
free(my_new_dog);
return (NULL);
}
my_new_dog->owner = owner;
return (my_new_dog);
}
