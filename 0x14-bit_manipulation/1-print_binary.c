#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - A function that prints binary representation of a number
 * @n: The number variable
 *
 * Return: The binary representation of the number
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
