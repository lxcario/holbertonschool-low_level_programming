#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function reverses the input string in place.
 * It uses two pointers (or indices), one starting from the beginning
 * and one from the end of the string. It swaps the characters at these
 * positions and moves the pointers towards the center until they meet.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* Swap characters from the ends towards the middle */
	while (start < end)
	{
		/* Store the character from the start */
		temp = s[start];

		/* Replace the start character with the end character */
		s[start] = s[end];

		/* Replace the end character with the stored start character */
		s[end] = temp;

		/* Move towards the middle */
		start++;
		end--;
	}
}
