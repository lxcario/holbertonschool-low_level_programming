#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Checks if a string contains only digits (and optional sign).
 * @s: The string to check.
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise.
 */
int is_valid_number(char *s)
{
	int j = 0;
	int digit_found = 0;

	/* Handle optional leading sign */
	if (s[0] == '-' || s[0] == '+')
	{
		j++; /* Move past the sign */
		/* If only a sign is present (e.g., "-"), it's not a valid number */
		if (s[j] == '\0')
		{
			return (0);
		}
	}

	/* Check remaining characters for digits */
	for (; s[j] != '\0'; j++)
	{
		if (!isdigit(s[j]))
		{
			return (0); /* Not a digit, so invalid */
		}
		digit_found = 1; /* At least one digit found */
	}

	/* If no digits were found (e.g., empty string or just "+"), it's invalid */
	if (!digit_found)
	{
		return (0);
	}

	return (1); /* All checks passed, it's a valid number string */
}

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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/* Use helper function to validate the current argument */
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		/* If valid, convert to integer and add to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

