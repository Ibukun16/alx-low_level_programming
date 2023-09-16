#include "main.h"
/**
 * print_triangle - print triangle using the character #
 * and terminate at new line
 * if size  is 0 or less, terminate to new line
 * @size: size of the triangle
 * Return: Only success value.
 */
void print_triangle(int size)
{
	int c, n;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (n = size - c; n > 0; n--)
				_putchar(' ');

			for (n = 1; n <= c; n++)
				_putchar('#');

			if (c == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');

}

