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
dog_t *my_new_dog = malloc(sizeof(dog_t));
int i = 0;
if (my_new_dog == NULL)
return (NULL);
my_new_dog->name = malloc(sizeof(name));
while(name[i])
{
my_new_dog->name[i] = name[i];
i++;
}
my_new_dog->age = age;
i = 0;
my_new_dog->owner = malloc(sizeof(owner));
while(owner[i])
{
my_new_dog->owner[i] = owner[i];
i++;
}

return (my_new_dog);
}
