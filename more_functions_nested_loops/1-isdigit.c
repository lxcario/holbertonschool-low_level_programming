#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked (passed as an integer).
 *
 * Description: This function determines if the given character is a
 * numeric digit from '0' to '9'.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
