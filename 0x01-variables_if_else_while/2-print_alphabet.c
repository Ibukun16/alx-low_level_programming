#include <stdio.h>

/**
 * main - alphabet game
 * print alphabet in lower case followed by a line
 * Return: Always 0 (success)
 */

int main(void)

{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
