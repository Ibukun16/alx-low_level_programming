#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the function that prints fizz-buzz.
 *
 * Return: 0 for successful execution.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d ", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
