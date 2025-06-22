#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle of a given size.
 * The triangle is composed of '#' characters and is right-aligned.
 * It uses nested loops: the outer loop for each row, one inner loop
 * for the leading spaces, and another inner loop for the '#' characters.
 * If 'size' is 0 or less, it prints only a newline.
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Loop for each row */
		for (row = 1; row <= size; row++)
		{
			/* Loop to print the required number of spaces */
			for (spaces = 1; spaces <= (size - row); spaces++)
			{
				_putchar(' ');
			}

			/* Loop to print the '#' characters for the current row */
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}

			/* Move to the next line after printing the row */
			_putchar('\n');
		}
	}
}
