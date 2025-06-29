#include <stdio.h> /* Required for printf */

/**
 * main - Prints all arguments received, one per line.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i; /* Loop counter for iterating through arguments */

	/* Iterate from the first argument (program name) up to the last */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* Print each argument followed by a newline */
	}

	return (0);
}
