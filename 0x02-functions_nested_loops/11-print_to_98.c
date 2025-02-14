#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints natural number from n to 98
 * @n: The given number to start count from
 *
 * Return: The list of nutural numbers up to 98
 */
void print_to_98(int n)
{
	int step = (n > 98) ? -1 : 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}
	printf("%d\n", n);
}
