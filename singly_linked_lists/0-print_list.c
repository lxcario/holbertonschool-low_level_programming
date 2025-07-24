#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length
 * @next: next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the list.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        if (current->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", current->len, current->str);
        }
        current = current->next;
        count++;
    }
    return (count);
}

