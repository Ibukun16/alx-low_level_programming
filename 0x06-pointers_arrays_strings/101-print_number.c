#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - A function that prints an integer
 * @n: The integer :x
 * variable.
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar ('-');
	}

	if (n / 10 > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
