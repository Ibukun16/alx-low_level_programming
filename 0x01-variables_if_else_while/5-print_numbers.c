#include <stdio.h>

/**
 * main - The entry point to the program that prints single digit numbers.
 *
 * Description: This program prints all single digit numbers of base 10.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int num = 0;

	do {
		putchar((char)(num + '0'));
		num++;
	} while (num < 10);

	putchar ('\n');
	return (0);
}
