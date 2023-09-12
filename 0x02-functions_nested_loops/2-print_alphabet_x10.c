#include "main.h"

/**
 * print_alphabet_x10 - Print the lower case alphabet ten times
 * @code for printing lower case alphabet ten times
 * Return: Always 0 (succes).
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet = 'a';

	while (count++ <= 9)
	{
		while (alphabet++ <= 'z')
		{
			_putchar(alphabet);
			_putchar('\n');
		}
	}
}
