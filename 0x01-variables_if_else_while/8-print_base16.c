#include <stdio.h>

/**
 * main - Entry point to the program that prints base 16 numbers in lowercase.
 *
 * Description: This program prints all base 16 numbers in lowercase.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int num = 0;
	char hex = 'a';

	do {
		putchar((num % 10) + '0');
		num++;
	} while (num < 10);

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}

	putchar ('\n');
	return (0);
}
