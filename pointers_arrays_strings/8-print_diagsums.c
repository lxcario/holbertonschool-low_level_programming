#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix (flattened).
 * @size: The size of the square matrix (number of rows or columns).
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
    int sum_primary_diag = 0;
    int sum_secondary_diag = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum_primary_diag += a[i * size + i];
        sum_secondary_diag += a[i * size + (size - 1 - i)];
    }

    printf("%d, %d\n", sum_primary_diag, sum_secondary_diag);
}
