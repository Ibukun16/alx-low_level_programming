#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * and terminate to a new line.
 * @s: The string to be printed
 * Return: The string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
