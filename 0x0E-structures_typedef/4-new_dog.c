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
char *name1, *owner1;
int i;
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
name1 = malloc(sizeof(char) * (strlen(name) + 1));
owner1 = malloc(sizeof(char) * (strlen(owner) + 1));
if (name1 == NULL || owner1 == NULL)
{
free(name1);
free(owner1);
free(my_new_dog);
return (NULL);
}
for (i = 0; name[i]; i++)
{
name1[i] = name[i];
owner1[i] = owner[i];
}
name1[i] = '\0';
owner1[i] = '\0';
my_new_dog->age = age;
my_new_dog->name = name1;
my_new_dog->owner = owner1;

return (my_new_dog);
}
