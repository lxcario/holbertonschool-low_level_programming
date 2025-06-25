#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int length = 0;
		int i, j;
		int found_in_accept;

		for (i = 0; s[i] != '\0'; i++)
		{
			found_in_accept = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_in_accept = 1;
				break;
			}
		}

		if (found_in_accept == 0)
		{
			break;
		}
		else
		{
			length++;
		}
		}

		return (length);
}
