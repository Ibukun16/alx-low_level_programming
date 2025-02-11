#include <stdio.h>

/**
 * main - The entry point to the program that prints the alphabet.
 *
 * Description: This program prints lowercase alphabet, excluding 'e' and 'q'
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	char lwr = 'a';

	do {
		if (lwr != 'e' && lwr != 'q')
			putchar(lwr);
		lwr++;
	} while (lwr <= 'z');

	putchar ('\n');
	return (0);
}
