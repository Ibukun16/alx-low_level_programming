#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * Description: Program code that print all natural number
 * n to 98 and return new line
 *@n: The number to start the counting from
 * Return: list of natural numbers.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
