#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digits.
 *
 * Descript: Program that prints all possible combinations of two two-digits.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int num, digit;

	for (num = 0; num < 99; num++)
	{
		for (digit = num + 1; digit <= 99; digit++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((digit / 10) + '0');
			putchar((digit % 10) + '0');

			if (num == 98 && digit == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
