#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A functon that print set of number 10 times
 * Return: void
 */
void more_numbers(void)
{
	int c, n;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('0' + c / 10);
			_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}
