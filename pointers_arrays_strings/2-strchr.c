#include "main.h"
#include <stddef.h>

/**
 * _strchr - function returns a pointer
 * @c: character
 * @s: string
 *
 * Return : pointer to the first occurrence of the character, NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);

	return (NULL);
}

