#include "main.h"

/**
 *
 * print_alphabet - Print alphabet on lowercase
 *
 * Return - void (no return value)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar ('\n');
}
	
