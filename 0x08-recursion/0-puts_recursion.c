#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - A function that prints string, followed by a new line
 * @s: Pointer to the string variable to be print
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
