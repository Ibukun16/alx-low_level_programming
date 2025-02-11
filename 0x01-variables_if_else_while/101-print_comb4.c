#include <stdio.h>

/**
 * main - Print all possible combinations of three digits.
 *
 * Description: Program that print all possible combinations of three digits.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int lead, num, dgt;

	for (lead = 0;  lead < 10; lead++)
	{
		for (num = lead + 1; num < 10; num++)
		{
			for (dgt = num + 1; dgt < 10; dgt++)
			{
				putchar((lead % 10) + '0');
				putchar((num % 10) + '0');
				putchar((dgt % 10) + '0');

				if (lead != 7 || num != 8 || dgt != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
