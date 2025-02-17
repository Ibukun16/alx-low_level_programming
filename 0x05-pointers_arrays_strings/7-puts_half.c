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
	int len = 0, count;

	while (str[len] != '\0')
		len++;

	for (count = (len / 2); count <= (len - 1); count++)
		_putchar(str[count]);

	_putchar('\n');
}
