#include <stdio.h> /* Required for printf */

/**
 * main - Prints the program's name, followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void) argc; /* Suppress unused parameter warning for argc */

	printf("%s\n", argv[0]); /* Print the program's name (argv[0]) */

	return (0);
}
