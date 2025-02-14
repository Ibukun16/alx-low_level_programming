#include "main.h"

/**
 * print_alphabet_x10 - A function that prints lowercase alphabet 10 times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char alp;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);

		_putchar('\n');
	}
}
