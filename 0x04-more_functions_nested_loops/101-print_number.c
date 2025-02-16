#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints an integer
 * @n: The variable n.
 *
 * Return: void;
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	else
		n = n;

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
