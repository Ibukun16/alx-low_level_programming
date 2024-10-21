#include "3-calc.h"

/**
 * get_op_func - A function pointer that selects the right function to
 * perform the desired operation.
 * @s: the operator input by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator supplied as a parameter
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
	int i;

	for (i = 0; ops[i].op; i++)
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

	return (NULL);
}
