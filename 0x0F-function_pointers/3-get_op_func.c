#include "3-calc.h"

/**
 * get_op_func - A function that selects the correct function to perform
 * the operation selected by the user.
 * @s: Pointer to the string character.
 *
 * Return: A pointer to the selected operator function, else NULL.
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

	for (i = 0; ops[i].op != NULL; i++)
		if (strcmp(ops[i].op, s) == 0)
			return (*(ops + i)->f);
	return (NULL);
}
