#include <stdio.h> /* Required for printf */

/**
 * main - Prints the number of arguments passed into it.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void) argv; /* Suppress unused parameter warning for argv */

	/* argc includes the program name itself, */
	/* so subtract 1 for the count of arguments passed. */
	printf("%d\n", argc - 1);

	return (0);
}

