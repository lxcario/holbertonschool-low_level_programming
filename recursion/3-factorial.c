#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative (error).
 */
int factorial(int n)
{
	/* Base case: If n is negative, return -1 to indicate an error */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive step: n * factorial(n - 1) */
	return (n * factorial(n - 1));
}

