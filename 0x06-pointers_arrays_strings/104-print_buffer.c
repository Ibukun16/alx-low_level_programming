#include "main.h"
#include <stdio.h>
/**
 * print_buffer - A function that prints a buffer
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer
 * Description: The function prints a buffer 10 bytes at a time
 *	starting with the byte position, them showing the hex content,
 *	then displaying printable characters.
 * Return: Return success value (0).
 */
void print_buffer(char *b, int size)
{
	int byte, idx;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		idx = 0;
		while (idx < 10)
		{
			if ((idx + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + idx + byte));
			if ((idx % 2) != 0 && idx != 0)
				printf(" ");
			idx++;
		}

		idx = 0;
		while (idx < 10)
		{
			if ((idx + byte) >= size)
				break;
			else if (*(b + idx + byte) >= 31 && *(b + idx + byte) <= 126)
				printf("%c", *(b + idx + byte));
			else
				printf(".");
			idx++;
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
