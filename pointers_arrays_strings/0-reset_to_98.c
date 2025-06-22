#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int and updates the value to 98.
 * @n: A pointer to an integer.
 *
 * Description: This function accepts a pointer to an integer variable.
 * It then dereferences the pointer to access the original variable's
 * memory location and updates its value to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
