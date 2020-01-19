#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *arr;
arr = malloc(sizeof(hash_table_t));
if (arr == NULL || size == 0)
{
return (NULL);
}
arr->size = size;
arr->array = NULL;
return (arr);
}
