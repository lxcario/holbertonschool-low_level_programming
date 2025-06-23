#include "main.h"

/**
 * _memset
 * Description : Function that fills memory with a constant byte
 * @s: starter adress
 * @b: constant byte
 * @n: filled byte
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
