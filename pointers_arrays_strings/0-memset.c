#include "main.h" /* Assuming "main.h" file exists */

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* Loop counter variable */

	/* Loop to fill the memory area for n bytes */
	for (i = 0; i < n; i++)
	{
		/*
		 * Fill the i-th byte starting from address s with value b.
		 * s[i] corresponds to address s + i * sizeof(char),
		 * and since char is 1 byte, it can be thought of as just s + i.
		 */
		s[i] = b;
	}

	/* Return the pointer to the filled memory area */
	return (s);
}

