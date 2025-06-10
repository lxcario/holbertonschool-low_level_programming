#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* Required for printf function */
/**
 * main - Entry point
 *
 * Description: This program assigns a random number to n and prints whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Your code goes here */
    printf("%d ", n); /* Print the number followed by a space */

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else /* n < 0 */
    {
        printf("is negative\n");
    }
    return (0);
}
