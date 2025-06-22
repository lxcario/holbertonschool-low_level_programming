#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be used from src.
 *
 * Description: This function appends up to 'n' characters from the `src`
 * string to the `dest` string. It overwrites the null terminator at the
 * end of `dest` and then adds a new null terminator. If `src` contains
 * n or more bytes, it does not need to be null-terminated.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n characters from the source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*
	 * Add the terminating null byte. The loop above stops when i is either
	 * n or the index of the null terminator in src. We place the null
	 * byte at the next position in dest.
	 */
	dest[dest_len + i] = '\0';

	return (dest);
}
