#include "main.h" /* Include the custom header for function prototypes */

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to be checked (an integer ASCII value).
 *
 * Description: This function takes an integer argument representing an ASCII
 * character. It determines if the character falls within the ASCII range of
 * either lowercase English letters ('a' to 'z') or uppercase English letters
 * ('A' to 'Z').
 *
 * Return: 1 if 'c' is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	/* Check if the character's ASCII value is within the lowercase range OR */
	/* within the uppercase range */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* It is an alphabetic character */
	}
	else
	{
		return (0); /* It is not an alphabetic character */
	}
}

