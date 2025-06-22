#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Description: This function iterates through a string. It capitalizes the
 * first letter of a word if it is preceded by a separator. The first
 * letter of the string is capitalized by default. Separators include
 * space, tab, newline, and various punctuation marks.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1; /* Flag to capitalize the next letter */

	while (str[i] != '\0')
	{
		/* If the current character is a lowercase letter and should be capitalized */
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32; /* Convert to uppercase */
		}

		/* Determine if the next character should be capitalized */
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
				break;
			default:
				capitalize_next = 0;
				break;
		}
		i++;
	}
	return (str);
}
