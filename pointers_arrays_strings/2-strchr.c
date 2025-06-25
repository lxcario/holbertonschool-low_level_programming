#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
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

