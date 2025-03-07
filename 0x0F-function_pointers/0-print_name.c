#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: Pointer to the function that prints name
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
