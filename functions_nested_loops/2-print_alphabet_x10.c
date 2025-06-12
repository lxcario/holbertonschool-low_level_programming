#include "main.h" /* Always use double quotes for custom header files */

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function uses a nested loop structure to print the
 * lowercase alphabet from 'a' to 'z' ten times, each followed by a new line.
 * It strictly uses the _putchar function for character output.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
