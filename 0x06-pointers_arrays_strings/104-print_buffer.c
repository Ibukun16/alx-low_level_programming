#include "main.h"
#include <stdio.h>
/**
 * print_line - A function that prints line of a buffer
 * @P: The pointer to the buffer to be printed
 * @byte: Number of byte to be printed from the buffer
 * Description: The function prints a buffer 10 bytes at a time
 *	starting with the byte position, them showing the hex content,
 *	then displaying printable characters.
 * @l: the line number of the buffer
 * Return: Success (0)
 */
void print_line(char *P, int byte, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= byte)
			printf("%02x", P[l * 10 + j]);
		else
			printf(" ");

		if (j % 2)
			putchar(' ');
	}

	for (k = 0; k  <= byte; k++)
	{
		if (P[l * 10 + k] > 31 && P[l * 10 + k] < 127)
			putchar(P[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - A function that prints buffer
 * @b: The pointer to the buffer to be printed
 * @size: size of the buffer.
 *
 * Return: Success (0)
 */
void print_buffer(char *b, int size)
{
	int idx;

	for (idx = 0; idx <= (size - 1) / 10 && size; idx++)
	{
		printf("%08x: ", idx * 10);
		if (idx < size / 10)
		{
			print_line(b, 9, idx);
		}
		else
		{
			print_line(b, size % 10 - 1, idx);
		}
		putchar('\n');
	}

	if (size == 0)
	{
		putchar('\n');
	}
}
