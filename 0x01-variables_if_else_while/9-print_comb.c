#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers.
 *
 * Description: Program that print all possible combinations of single digit.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int num = 0;

	for ( ; num < 10; num++)
	{
		putchar((num % 10) + '0');

		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');

	}
	putchar ('\n');
	return (0);
}
