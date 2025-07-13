#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/*
 * File: variadic_functions.h
 * Desc: Header file containing prototypes for all functions.
 */

/**
 * struct printer_s - Maps format char to print function.
 * @type_char: The format character.
 * @print_func: The function to handle printing.
 */
typedef struct printer_s
{
	char type_char;
	void (*print_func)(va_list *);
} printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
