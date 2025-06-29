#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 as per the prototype requirement */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: x raised to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: x^y = x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
