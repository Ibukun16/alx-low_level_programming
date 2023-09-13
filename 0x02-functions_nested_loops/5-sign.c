#include "main.h"

/**
 * print_sign - identify the sign of numbers
 * @+: positive sign
 * @-: negative sign
 * @n: number parameter to check its sign
 *
 * Description: Programme code that prints sign of a number
 * Return: Always 0 (successful).
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
