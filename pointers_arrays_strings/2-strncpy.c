#include "main.h"

/**
 * _strncpy - Copies a string, working exactly like the standard strncpy.
 * @dest: The destination buffer where the content is to be copied.
 * @src: The string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Description: This function copies up to n characters from the string 'src'
 * to 'dest'. If 'src' is less than n characters long, the remainder of
 * 'dest' is filled with null bytes. If 'src' is n or more characters long,
 * the destination string will not be null-terminated.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*
	 * Loop through src and copy characters to dest, up to n bytes.
	 * The loop condition handles both the n limit and the end of src.
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * If src has fewer than n characters, the previous loop terminates.
	 * This second loop continues from where the first left off and pads
	 * the rest of dest with null bytes until n bytes have been written.
	 */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
