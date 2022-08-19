#include "hash_tables.h"

/**
 * hash_table_create - Fct that creates a hash table
 *
 * @size: size of the array
 *
 * Return: A pointer
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/**Allocate table*/
	unsigned int i;

	hash_table_t *hash_table = malloc(sizeof(hash_table_t) * 1);
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;

	/** Allocate table entries */
	hash_table->array = malloc(sizeof(hash_table) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	/** To set each to null */
	for (i = 0; i < hash_table->size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
