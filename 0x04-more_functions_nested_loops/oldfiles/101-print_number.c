#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - print an integer
 * @n: integer in consideration
 * Return: Always a success (0)
 */
void print_number(int n)
{
	unsigned int p = 0;

	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	else
	{
		p = n;
	}
	if ((p / 10) > 0)
		print_number(p / 10);

	_putchar((p % 10) + '0');
}
