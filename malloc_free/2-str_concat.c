#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	a = malloc(sizeof(char) * (l1 + l2 + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		a[i] =s2[j];

	a[i] = '\0';

	return (a)
}
