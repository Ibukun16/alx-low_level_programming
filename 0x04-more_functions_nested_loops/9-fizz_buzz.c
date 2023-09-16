#include "main.h"
#include <stdlib.h>
/**
 * main - print numbers from 1 to 100 and terminate at a new line.
 * For every multiple of three print Fizz instead of 3,
 * and at every multiple of 5 print Buzz instead of 5.
 * For every multiples of both three and five print FizzBuzz.
 * Each number should be separated by a space.
 * Return: Return only success.
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("Fizz");
		else if (c % 5 == 0)
			printf("Buzz");
		else if (c % 3 == 0 && c % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", c);
		if (c != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
