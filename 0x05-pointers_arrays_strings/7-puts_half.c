#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints half of a string
 * @str: The string variable
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, count, n;

	while (str[len] != '\0')
		len++;

	n = (len - 1) / 2;

	for (count = n + 1; count < len; count++)
		_putchar(str[count]);

	_putchar('\n');
}
