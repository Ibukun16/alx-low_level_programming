#include "main.h"
/**
 * times_table - times table
 * Return: Always a succes.
 */
void times_table(void)
{
	int no, multi, product;

	for (no = 0; no <= 9; no++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = no * multi;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
