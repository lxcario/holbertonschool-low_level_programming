#include "main.h"

/**
 * _sqrt_finder - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if not found.
 */
int _sqrt_finder(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_finder(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_finder(n, 1));
}
