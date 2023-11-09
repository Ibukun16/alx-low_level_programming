#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: The name to print
 * @f: Pointer to the printing function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
