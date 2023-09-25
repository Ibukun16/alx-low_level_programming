#include "main.h"
/**
 * print_chessboard - A function that prints chessboard
 * @a: array of pieces
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b = 0, c;

	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		_putchar('\n');
		b++;
	}
}

