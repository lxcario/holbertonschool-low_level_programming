#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function.
 * @s: The operator.
 * Return: Pointer to the function, or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0 && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
