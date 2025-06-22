#include "main.h"

/**
 * print_square - Prints a square using the '#' character.
 * @size: The size (width and height) of the square.
 *
 * Description: This function uses nested loops to print a square.
 * The outer loop handles the rows (height), and the inner loop
 * handles the columns (width), printing '#' for each position.
 * A newline is printed after each row. If the size is 0 or
 * less, it only prints a single newline.
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Loop for each row of the square */
		for (row = 0; row < size; row++)
		{
			/* Loop for each column in a row */
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			/* Move to the next line after a row is printed */
			_putchar('\n');
		}
	}
}
