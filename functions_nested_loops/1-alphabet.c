#include "main.h" /* Include the custom header for function prototypes */

/**
 * print_alphabet - Prints the lowercase alphabet to stdout.
 *
 * Description: This function iterates through all lowercase letters from 'a'
 * to 'z' using a for loop. Each character is printed to standard output
 * using the _putchar function. Finally, a new line character is printed.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char letter; /* Declare a character variable to hold each letter */

	/* Loop through letters from 'a' to 'z' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter); /* Print the current letter */
	}

	_putchar('\n'); /* Print a new line after the alphabet */
}

