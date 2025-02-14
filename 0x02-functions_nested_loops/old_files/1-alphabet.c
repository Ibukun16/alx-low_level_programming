#include "main.h"

/**
 * print_alphabet - Print the lower case alphabet
 * @code that print the lower case alphabet followed by a new line
 * Return: Always 0 (succes)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
