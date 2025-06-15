#include "main.h" // Assuming main.h declares _putchar

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			// Print the tens digit of the hour
			_putchar((hour / 10) + '0');
			// Print the units digit of the hour
			_putchar((hour % 10) + '0');
			// Print the colon separator
			_putchar(':');
			// Print the tens digit of the minute
			_putchar((minute / 10) + '0');
			// Print the units digit of the minute
			_putchar((minute % 10) + '0');
			// Print a newline character after each minute
			_putchar('\n');
		}
	}
}
