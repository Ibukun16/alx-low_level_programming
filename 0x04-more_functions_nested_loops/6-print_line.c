#include "main.h"
/**
 * print_line - print character _ to draw a straight line in the terminal
 * @n: the number of times the character _ is drawn
 * the line terminate to a new line
 * if n is < 0 then only migrate to a new line
 * Return: Only success values.
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
