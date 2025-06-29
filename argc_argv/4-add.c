#include <stdio.h> /* For printf */
#include <stdlib.h> /* For atoi */
#include <ctype.h> /* For isdigit */

/**
 * main - Adds positive numbers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error (non-digit symbol in argument).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	int digit_found;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		digit_found = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
			{
				if (argv[i][j + 1] == '\0')
				{
					printf("Error\n");
					return (1);
				}
				continue;

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			digit_found = 1;
		}

		if (!digit_found && (argv[i][0] != '-' && argv[i][0] != '+'))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
