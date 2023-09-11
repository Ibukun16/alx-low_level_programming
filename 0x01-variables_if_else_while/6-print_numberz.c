#include <stdio.h>

/**
 * main - print all single digit numbers using putchar
 * Return: Always successful
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar ((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
