#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints strings in reverse recursively.
 * @s: Pointer to the string to print
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
