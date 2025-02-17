#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints string in reverse
 * @s: The string variable
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int c = 0, l;

	while (s[c] != '\0')
		c++;

	for (l = c - 1; s[l] >= 0; l--)
		_putchar(s[l]);

	_putchar('\n');
}
