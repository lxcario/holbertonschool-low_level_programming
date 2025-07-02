#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		j++;
	}
	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		a[i] = str[i];
	}

	a[j] = '\0';

	return (a);
}
