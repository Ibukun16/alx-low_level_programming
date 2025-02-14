#include "main.h"
/**
 * times_table - A function that prints the times table
 *
 * Return: 0 for successful execution
 */
void times_table(void)
{
	int col, row, res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;

			if (col > 0)
				_putchar(res > 9 ? (res / 10) + '0' : ' ');
			_putchar((res % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
