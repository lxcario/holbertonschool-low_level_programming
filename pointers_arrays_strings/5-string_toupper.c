#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Description: This function iterates through each character of the string.
 * If a character is a lowercase letter, it is converted to its uppercase
 * equivalent. The modification happens in place.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting the ASCII difference */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
