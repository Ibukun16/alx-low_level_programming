#include "main.h"

/**
 * print_diagonal - use the character \ to draw diagoinal line on the terminal
 * @n: the number of times the character \ should be drawn.
 * The diagonal line should terminate to a new line.
 * If n is 0 or less, the function should terminate to a new line.
 * Return: only success.
 */
void print_diagonal(int n)
{
	int c, s;

	for (c = 0; c < n; c++)
	{
		for (s = 0; s < c; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
