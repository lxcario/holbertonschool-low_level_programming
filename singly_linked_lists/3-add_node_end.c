#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds node to end.
 * @head: Head of list.
 * @str: String for node.
 * Return: New element address or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	char *dup_str;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
