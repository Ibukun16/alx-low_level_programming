#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: Character pointer variable
 * @size: The size of the buffer
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int index, byte;

	for (index = 0; index < size; index += 10)
	{
		printf("%08x: ", index);
		for (byte = index; byte < index + 10; byte += 2)
		{
			if (byte < size)
				printf("%02x", *(b + byte));
			else
				printf("%2c", ' ');
			if (byte + 1 < size)
				printf("%02x", *(b + byte + 1));
			else
				printf("%2c", ' ');
			putchar(' ');
		}
		for (byte = index; byte < index + 10; byte++)
			if (byte < size)
				putchar(*(b + byte) < ' ' ? '.' : *(b + byte));

		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
