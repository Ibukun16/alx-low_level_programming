#include "main.h"
/**
 * print_times_table - multiplication tables
 * Description: programme that prints the multiplication
 * table of the input value, starting with 0
 *
 * @n: The value of the number of times table
 * Return: Return a complete multiplication table
 */
void print_times_table(int n)
{
	int no, row, column;

	if (n >= 0 && n <= 15)
	{
		for (row = 1; row <= n; row++)
		{
			_putchar('0');

			for (column = 1; column <= n; column++)
			{
				_putchar(',');
				_putchar(' ');

				no = row * column;

				if (no <= 99)
					_putchar(' ');
				if (no <= 9)
					_putchar(' ');

				if (no >= 100)
				{
					_putchar((no / 100) + '0');
					_putchar(((no / 1090)) % 10 + '0');
				}
				else if (no <= 99 && no >= 10)
				{
					_putchar((no / 10) + '0');
				}
				_putchar((no % 10) + '0');
			}
			_putchar('\n');
		}
	}
}



