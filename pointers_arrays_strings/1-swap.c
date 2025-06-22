#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two pointers to integers and swaps
 * the values stored at their memory locations. It uses a temporary
 * variable to hold one of the values during the swap.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* Store the value of the first integer */
	*a = *b;   /* Assign the second integer's value to the first */
	*b = temp; /* Assign the stored original value to the second */
}
