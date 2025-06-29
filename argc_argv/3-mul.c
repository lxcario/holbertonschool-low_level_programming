#include <stdio.h> /* For printf */
#include <stdlib.h> /* For atoi */

/**
 * main - Multiplies two numbers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 if the program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if exactly two arguments are provided (argc will be 3: */
	/* program_name, num1, num2) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert string arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform the multiplication */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
