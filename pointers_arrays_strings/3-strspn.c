#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s - the initial segment
 * @accept - the character to find
 *
 * Return : initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
		unsingned int length = 0;
		int i, j;
		int found_in_accept;

		for (i = 0; s[i] != '\0'; i++)
		{
			found_in_accept = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept [j])
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

