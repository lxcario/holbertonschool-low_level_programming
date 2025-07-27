#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct list_s - Singly linked list.
 * @str: String data (malloc'ed).
 * @len: Length of string.
 * @next: Pointer to next node.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * struct dlistint_s - Doubly linked list node.
 * @n: Integer data.
 * @prev: Pointer to previous node.
 * @next: Pointer to next node.
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
size_t print_dlistint(const dlistint_t *h);

#endif
