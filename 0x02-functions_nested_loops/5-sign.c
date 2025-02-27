#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: The given number
 *
 * Return: 1 for positive, 0 for zero and -1 for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
