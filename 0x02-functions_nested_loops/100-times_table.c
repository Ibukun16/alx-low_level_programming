#include "main.h"
/**
 * print_times_table - multiplication tables
 *@n: the paratmeter of interest
 * Description: programme that prints the multiplication of numbers
 * Return: Return a complete multiplication table
 */
void print_times_table(int n)
{
	int row_no, col_no, multi;

	if (n >= 0 && n <= 15)
	{
		for (row_no = 0; row_no <= n; row_no++)
		{
			for (col_no = 0; col_no <= n; col_no++)
			{
				multi = col_no * row_no;
				if (col_no == 0)
				{
					_putchar(multi + '0');
				}
				else if (multi < 10 && col_no != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				}
				else if (multi >= 10 && multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else if (multi >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
