#include <stdio.h>

/**
 * main - Prints some letters of alphabets
 *
 * Return: Always (Success)
 */
	int main(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			if (c != 'e' && c != 'q')
			{
				putchar(c);
			}
		}

		putchar('\n');

		return (0);
	}

