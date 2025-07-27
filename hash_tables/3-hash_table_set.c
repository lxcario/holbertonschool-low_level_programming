#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update.
 * @key: The key (cannot be empty string).
 * @value: The value associated with the key (duplicated).
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current;
	char *value_copy;
	char *key_copy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check for key update (collision with existing key) */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Free old value */
			current->value = value_copy; /* Assign new value */
			return (1);
		}
		current = current->next;
	}

	/* Key not found, create new node and add at the beginning */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index]; /* Point new node to current head of list */
	ht->array[index] = new_node; /* New node becomes the head */

	return (1);
}
