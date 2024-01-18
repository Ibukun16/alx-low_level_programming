#include "main.h"
/**
 * _puts - print a string and terminate at a new line.
 * @str: The string in focus.
 *
 * Return: success (0).
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
