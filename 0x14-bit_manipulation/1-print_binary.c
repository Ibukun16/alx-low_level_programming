#include "main.h"
/**
 * print_binary - A function that print the binary representation
 * of a number.
 * @n: The number to print its binary representation
 *
 * Return: 0 for success.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
