#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each array element.
 * @array: The array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
