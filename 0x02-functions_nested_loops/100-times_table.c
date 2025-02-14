#include "main.h"

/**
 * print_times_table - A function that print n times table.
 * @n: The integer base multiplication value.
 *
 * Return: Multiplication table result.
 */
void print_times_table(int n)
{
	int row, col, mul;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			mul = row * col;

			if (col > 0)
			{
				_putchar(mul > 99 ? (mul / 100) + '0' : ' ');
				_putchar(mul > 9 ? ((mul / 10) % 10) + '0' : ' ');
			}
			_putchar((mul % 10) + '0');

			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


