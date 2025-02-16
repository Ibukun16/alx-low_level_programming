#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that draws a line.
 * @n: The count of the line to print.
 *
 * Return: void.
 */
void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('-');
		count++;
	}
	_putchar('\n');
}
