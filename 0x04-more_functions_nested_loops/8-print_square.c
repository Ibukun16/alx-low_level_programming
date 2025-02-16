#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that print square
 * @size: The size of the square
 *
 * Return: void.
 */
void print_square(int size)
{
	int count, n;

	for (count = 0; count < size; count++)
	{
		for (n = 0; n < size; n++)
			_putchar('#');
		_putchar('\n');
	}
}

