#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times, followed by a new line.
 *
 * Description: This function uses nested loops to print numbers.
 * The outer loop runs 10 times to create 10 lines of output.
 * The inner loop iterates from 0 to 14.
 * For numbers greater than 9, it first prints the tens digit and
 * then the units digit. A newline character is printed after each
 * full sequence of 0-14. The _putchar function is used exactly
 * three times.
 */
void more_numbers(void)
{
	int i; /* Iterator for the 10 lines */
	int j; /* Iterator for the numbers 0-14 */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			/* If the number is two digits, print the first digit */
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			/* Print the last digit of the number */
			_putchar((j % 10) + '0');
		}
		/* Print a newline character at the end of the sequence */
		_putchar('\n');
	}
}
