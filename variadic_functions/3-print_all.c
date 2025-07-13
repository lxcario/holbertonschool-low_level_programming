#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char_handler - Prints char.
 * @args_ptr: va_list pointer.
 */
static void print_char_handler(va_list *args_ptr)
{
	printf("%c", va_arg(*args_ptr, int));
}

/**
 * print_int_handler - Prints int.
 * @args_ptr: va_list pointer.
 */
static void print_int_handler(va_list *args_ptr)
{
	printf("%d", va_arg(*args_ptr, int));
}

/**
 * print_float_handler - Prints float.
 * @args_ptr: va_list pointer.
 */
static void print_float_handler(va_list *args_ptr)
{
	printf("%f", va_arg(*args_ptr, double));
}

/**
 * print_string_handler - Prints string.
 * @args_ptr: va_list pointer.
 */
static void print_string_handler(va_list *args_ptr)
{
	char *s = va_arg(*args_ptr, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - Prints anything.
 * @format: List of types.
 * @...: Arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	static void (*print_handlers[256])(va_list *) = {
		['c'] = print_char_handler,
		['i'] = print_int_handler,
		['f'] = print_float_handler,
		['s'] = print_string_handler
	};

	va_start(args, format);

	while (format && format[i])
	{
		if (print_handlers[(unsigned char)format[i]] != NULL)
		{
			printf("%s", sep);
			print_handlers[(unsigned char)format[i]](&args);
			sep = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
