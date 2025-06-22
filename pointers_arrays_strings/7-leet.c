#include "main.h"

/**
 * leet - Encodes a string into 1337 speak.
 * @str: The input string to be encoded.
 *
 * Description: This function replaces specific letters with numbers
 * to encode a string into "leet" speak. The replacements are:
 * 'a'/'A' -> '4', 'e'/'E' -> '3', 'o'/'O' -> '0', 't'/'T' -> '7',
 * 'l'/'L' -> '1'. The function adheres to the constraints of using
 * only one 'if' and two loops.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	/* Outer loop to iterate through the input string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Inner loop to check against the letters to be replaced */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* The single allowed 'if' statement to check for a match */
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j];
				break; /* Break inner loop once a replacement is made */
			}
		}
	}

	return (str);
}
