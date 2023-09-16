#include "main.h"
/**
 * more_numbers - print out ten rows of numbers
 * from 1 to 14.
 * Return: success values
 */
void more_numbers(void)
{
	int c, n;

	c = 0;
	while (c < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		c++;
	}
}
