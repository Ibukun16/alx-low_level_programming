#include <stdio.h>

/**
 * main - Print all possible combinations of two digits.
 *
 * Description: Program that print all possible combinations of two digits.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int lead;
	int num;

	for (lead = 0;  lead < 10; lead++)
	{
		for (num = lead + 1; num < 10; num++)
		{
			putchar((lead % 10) + '0');
			putchar((num % 10) + '0');

			if (lead != 8 || num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
