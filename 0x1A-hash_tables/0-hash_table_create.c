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
long int i = size;
arr = malloc(sizeof(hash_table_t));
/*if (i <= 0)
size = size * -1;
*/
if (arr == NULL || i <= 0)
{
free(arr);
return (NULL);
}
arr->size = size;
arr->array = NULL;
return (arr);
}
