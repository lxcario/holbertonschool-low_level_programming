#include "main.h"

/**
 * _islower(int c) - checks for lowercase
 *
 * DESC -  Return 1 if c is lowercase
 *
 * Return: Always Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

