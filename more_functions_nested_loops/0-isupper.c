#include "main.h"

/**
 * _isupper - Checks for an uppercase character.
 * @c: The character to be checked (passed as an integer).
 *
 * Description: This function determines if the given character is an
 * uppercase letter (from 'A' to 'Z').
 *
 * Return: 1 if c is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
