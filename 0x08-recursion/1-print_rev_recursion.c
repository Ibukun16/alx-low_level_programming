#include "main.h"
/**
 * _print_rev_recursion - A function that print a string in reverse
 * @s: The string to print
 *
 * Return: 0 for success.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
