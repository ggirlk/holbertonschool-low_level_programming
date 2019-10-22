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
int i = 0;
if (my_new_dog == NULL)
return (NULL);
my_new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
my_new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (my_new_dog->name == NULL || my_new_dog->owner == NULL)
{
free(my_new_dog->name);
free(my_new_dog->owner);
free(my_new_dog);
return (NULL);
}
while (name[i] != '\0')
{
my_new_dog->name[i] = name[i];
i++;
}
my_new_dog->name[i] = '\0';
my_new_dog->age = age;
i = 0;
while (owner[i] != '\0')
{
my_new_dog->owner[i] = owner[i];
i++;
}
my_new_dog->owner[i] = '\0';

return (my_new_dog);
}
