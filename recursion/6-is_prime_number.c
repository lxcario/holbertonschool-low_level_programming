#include "main.h"

/**
 * check_prime - function to check number prime recursively.
 * @n: The number to check.
 * @i: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Numbers less than or equal to 1 are not prime */
	if (n <= 1)
	{
		return (0);
	}

	/* 2 is the only even prime number */
	if (n == 2)
	{
		return (1);
	}

	/* If n is an even number greater than 2, it's not prime */
	if (n % 2 == 0)
	{
		return (0);
	}

	return (check_prime(n, 2));
}
