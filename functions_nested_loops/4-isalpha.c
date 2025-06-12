#include "main.h"

/**
 * _isalpha.c - check if the integer is a letter, lowercase or uppercase
 *
 *
 * Return: 1 if 'c' is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')
	{
		return (1)
	}
	else
	{
		return (0)
	}
}
