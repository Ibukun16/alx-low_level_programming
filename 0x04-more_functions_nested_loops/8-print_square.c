#include "main.h"
/**
 * print_square - a function that produce square using putchar to print #
 * @size: the size of the square
 * if size is 0 or less, the function terminate on anew line
 * Return: Only success is returned.
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
