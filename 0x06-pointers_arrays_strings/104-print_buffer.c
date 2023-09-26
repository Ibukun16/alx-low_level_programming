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
			printf("%02x", p[l * 10 + j]);
		else
			printf(" ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= t; k++)
	{
		if (p[l * 10 + k] > 31 && p[l * 10 + k] < 127)
			putchar(p[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - A function that prints a buffer
 * @b: The pointer to the buffer
 * @size: size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	while (i <= (size - 1) / 10 && size)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
		i++;
	}
	if (size == 0)
		putchar('\n');
}
