#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A funcytion that draws digonal line.
 * @n: The number of diagonal lines to draw.
 * If n is 0 or less, terminate to a new line.
 * Return: void.
 */
void print_diagonal(int n)
{
	int count, line;

	for (line = 0; line < n; line++)
	{
		for (count = 0; count < line; count++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
