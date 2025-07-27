#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h> /* For size_t */

/**
 * struct hash_node_s - Node of a hash table.
 * @key: The key.
 * @value: The value.
 * @next: Pointer to next node.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure.
 * @size: Size of the array.
 * @array: Array of pointers to nodes.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
