#include <stdio.h>

/**
 * main - Print all single digit numbers
 * prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return:Always successful
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
