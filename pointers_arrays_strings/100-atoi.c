#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: The function scans the string to find the first sequence of
 * digits. It considers all preceding '+' and '-' signs to determine if the
 * number is positive or negative. The conversion stops once a non-digit
 * character is found after the number has started. If no digits are found,
 * the function returns 0.
 *
 * Return: The integer value parsed from the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int digit_found = 0;

	while (s[i] != '\0')
	{
		/* Track the sign based on '-' characters */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* Process the numerical digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		/* If we have found a number and encounter a non-digit, stop. */
		else if (digit_found)
		{
			break;
		}

		i++;
	}

	/* Apply the calculated sign to the final result */
	return (result * sign);
}
