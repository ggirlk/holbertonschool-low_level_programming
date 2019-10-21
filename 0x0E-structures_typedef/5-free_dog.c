#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  frees dogs.
 * @d: instance of dog
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
free(d);
}
