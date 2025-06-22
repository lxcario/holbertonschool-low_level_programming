#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to a buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Description: This function copies the string from the source, including
 * the null terminator ('\0'), to the destination buffer.
 *
* Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop through the source string and copy each character */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append the null terminator to the destination string */
	dest[i] = '\0';

	/* Return the pointer to the destination string */
	return (dest);
}
