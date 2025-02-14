#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - The entry of the function that prints putchar
 * Return: 0 for successful execution
 */
int main(void)
{
	char p[] = "_putchar\n";
	int c, n = strlen(p);

	for (c = 0; c < n; c++)
		_putchar(p[c]);

	return (0);
}
