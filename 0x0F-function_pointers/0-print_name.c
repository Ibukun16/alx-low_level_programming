#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The name to print
 * @f: pointer to the function that prints name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
