#include <stdio.h>

/**
 * main - Print lowercase alphabet excluding q and e
 * Write a program that prints the alphabet in lowercase
 * followed by a new line.Print all the letters except q and e.
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar alphabet;

		alphabet++;
	}

	putchar ('\n');
	return (0);
}
