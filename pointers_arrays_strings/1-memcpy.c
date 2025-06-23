#include "main.h"

/**
 * _memcpy(): function copies n bytes from memory area src to memory area dest
 * @n:bytes from memory area
 * @src: memory area
 * @dest: yes
 *
 * @return: always success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
