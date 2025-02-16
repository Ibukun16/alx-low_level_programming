#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - A function that prints numbers from 0 to 9.
 * Return: void.
 */
void print_most_numbers(void)
{
	char c = '0';

	do {
		if (c != '2' && c != '4')
			putchar(c);
		c++;
	} while (c <= '9');
	putchar('\n');
}
