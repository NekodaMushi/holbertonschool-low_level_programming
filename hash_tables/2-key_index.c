#include "hash_tables.h"

/**
 * key_index - Fct giving the index of a given key
 *
 * @key: key's location
 * @size: size of array
 *
 * Return : Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
