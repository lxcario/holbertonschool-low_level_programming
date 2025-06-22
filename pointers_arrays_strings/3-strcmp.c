#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Description: This function lexicographically compares the two strings s1
 * and s2. It iterates through both strings and compares them character
 * by character.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found, respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	/* Loop through both strings as long as characters are equal and not null */
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	/*
	 * Return the difference between the first pair of differing characters.
	 * If the strings are identical, this will be ('\0' - '\0'), which is 0.
	 */
	return (*s1 - *s2);
}
