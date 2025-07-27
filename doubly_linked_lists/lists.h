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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
