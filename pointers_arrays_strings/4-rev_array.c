#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Description: This function reverses the order of elements in the given
 * array in place. It uses a loop that swaps elements from the beginning
 * of the array with elements from the end, moving towards the center.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* Loop from the beginning to the middle of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Store the current element */
		temp = a[i];

		/* Swap with the corresponding element from the end */
		a[i] = a[n - 1 - i];

		/* Place the stored element at the end position */
		a[n - 1 - i] = temp;
	}
}
