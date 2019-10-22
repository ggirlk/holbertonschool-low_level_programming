#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
dog_t *my_new_dog;
my_new_dog = malloc(sizeof(dog_t));

if (my_new_dog == NULL)
{
free(my_new_dog);
return (NULL);
}
if (name == NULL || owner == NULL || age <= 0)
{
free(my_new_dog);
return (NULL);
}
my_new_dog->age = age;
my_new_dog->name = name;
my_new_dog->owner = owner;

return (my_new_dog);
}
