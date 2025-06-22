#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements of the array to be printed.
 *
 * Description: This function prints the first 'n' elements of the integer
 * array 'a'. Numbers are separated by a comma and a space.
 * The output is followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* Print the integer */
		printf("%d", a[i]);

		/* If it's not the last element, print the separator */
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	/* Print a newline character at the end */
	printf("\n");
}
