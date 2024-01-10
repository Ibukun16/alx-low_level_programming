#include "main.h"
/**
 * _puts_recursion - a function that prints a string recursively
 * @s: The string to print
 *
 * Return: 0 for success.
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
