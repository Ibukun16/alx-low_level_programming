#include "main.h"
#include <stdio.h>
/**
 * print_line - A function that prints line of a buffer
 * @p: The pointer to the buffer to be printed
 * @t: Number of byte to be printed from the buffer
 * @l: the line number of the buffer
 *
 * Return: void
 */

void print_line(char *p, int t, int l)
{
	int j, k;
	for (j = 0; j <= 9; j++)
	{
		if (j <= t)
			printf("%02x", c[l * 10 + j]);
		else
			printf(" ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= t; k++)
	{
		if (p[l * 10 + k] > 31 && p[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}


r - A function that prints buffer
 * @b: The pointer to the buffer to be printed
 * @size: size of the buffer.
 *
 * Return: void
 */

