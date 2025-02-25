#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: The string variable
 *
 * Return: Nothing.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
