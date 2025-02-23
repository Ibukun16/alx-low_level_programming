#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A fuction that prints chessboard
 * @a: Pointer to the chessboard
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int idx, count;

	for (idx = 0; idx < 8; idx++)
	{
		for (count = 0; count < 8; count++)
			printf("%c", a[idx][count]);
		printf("\n");
	}
}
