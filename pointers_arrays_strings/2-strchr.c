#include "main.h"
#include <stddef.h>

/**
 * _strchr - function returns a pointer to the first occurrence of the character c in the string s
 *
 * @c: character
 * @s: string
 * @NULL: character not found
 *
 * Return : pointer to the first occurrence of the character
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

