#include "3-calc.h"

/**
 * sel_oper_func - A function pointer that selects the right function to
 * an perform the desired operation.
 * @s: the operator input by the user
 *
 * Return: pointer to the function that corresponds to the
 * operator provided as a parameter
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
	int n;

	for (n = 0; ops[n].op; n++)
		if (strcmp(ops[n].op, s) == 0)
			return (ops[n].f);

	return (NULL);
}
