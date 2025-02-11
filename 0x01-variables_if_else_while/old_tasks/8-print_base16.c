#include <stdio.h>

/**
 * main - Print numbers in hexadecimal
 * use only putchar
 * Return: Always successful
 */

int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}

