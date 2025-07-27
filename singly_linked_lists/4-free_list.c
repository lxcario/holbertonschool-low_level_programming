#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the list head.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
